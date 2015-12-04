#include <stdio.h>
#include "data.h"
#define PHONE_FILE "phonebook.dat"

/* returns number of entries that was read fron the file */
int readEntries(phoneEntry *entries)
{
	FILE * infile;
	int count = 0;
    infile = fopen(PHONE_FILE, "rb");
    if(infile != NULL) {
		count = fread(entries, sizeof(phoneEntry), BOOKSIZE, infile);
        fclose(infile);
    }
	entries[count].name[0] = '\0'; /* ensure that there is terminator at the end */

	return count;
}

/* returns zero if entries were written to file and non-zero if error occurred */
int writeEntries(phoneEntry *entries)
{
	FILE * outfile;
	int count = 0;
	int wcount = 0;
    outfile = fopen(PHONE_FILE, "wb");

	/* count entries in phone book */
	for(count = 0; entries[count].name[0] == '\0' && count <= BOOKSIZE; count++);

    if(outfile != NULL) {
		wcount = fwrite(entries, sizeof(phoneEntry), count, outfile);
        fclose(outfile);
    }

	if(count != wcount) return -1;

	return 0;
}