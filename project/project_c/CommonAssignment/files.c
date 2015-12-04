#include <stdio.h>
#include "data.h"
#include "readers.h"

#define TRIP_FILE "trip.dat"

/* returns number of entries that was read fron the file */
int readEntries(tripEntry *entries)
{
	FILE * infile;
	int count = 0;
	infile = fopen(TRIP_FILE, "rb");
	if(infile != NULL) {
		count = fread(entries, sizeof(tripEntry), TRIPSIZE, infile);
		fclose(infile);
	}
	entries[count].start_loc[0] = '\0'; /* ensure that there is terminator at the end */

	return count;
}

/* returns zero if entries were written to file and non-zero if error occurred */
int writeEntries(tripEntry *entries)
{
	FILE * outfile;
	int count = 0;
	int wcount = 0;
	outfile = fopen(TRIP_FILE, "a+");

	/* count entries in phone book */
	for(count = 0; entries[count].start_loc[0] == '\0' && count <= TRIPSIZE; count++);
	{
		readEntry(entries);
	}


	if(outfile != NULL) {
		wcount = fwrite(entries, sizeof(tripEntry), count, outfile);
		fclose(outfile);
	}

	if(count != wcount) return -1;

	return 0;
}

/*innitialize a file by creating it or overide it if it exists*/
int initializeEntries(tripEntry *entries)
{
	FILE * infile;
	int count = 0;
	infile = fopen(TRIP_FILE, "w");
	fclose(infile);

	return 0;
}