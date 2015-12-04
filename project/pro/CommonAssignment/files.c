#include <stdio.h>
#include "data.h"
#include "readers.h"
#include "writers.h"

#define TRIP_FILE "trip.dat"

/* returns number of entries that was read fron the file */
int readEntries(tripEntry *entries)
{
	FILE * infile;
	int count = 0;
	infile = fopen(TRIP_FILE, "r");
	if(infile != NULL) {

		/* count entries in diary */
	for(count = 0; entries[count].start_loc[0] == '\0' && count <= TRIPSIZE; count++);
		{
			count = fread(entries, sizeof(tripEntry), TRIPSIZE, infile);
			writeEntry(entries);
			printf("%d", count);
			

		}
		fclose(infile);
	}
	//entries[count].start_loc[0] = '\0'; /* ensure that there is terminator at the end */

	return count;
}

/* returns zero if entries were written to file and non-zero if error occurred */
int writeEntries(tripEntry *entries)
{
	FILE * outfile;
	int count = 0;
	outfile = fopen(TRIP_FILE, "a");

	/* count entries in diary */
	for(count = 0; entries[count].start_loc[0] == '\0' && count <= TRIPSIZE; count++);

	if(outfile != NULL) {
		readEntry(entries);
		fwrite(entries, sizeof(tripEntry), count, outfile);
		printf("data saved \n");
		fclose(outfile);
	}

	//if file doesnt exist
	if(outfile == NULL)
	{
		printf("Error opening %s for writing. Program terminated.", outfile);
		return -1;
	} 

	return 0;
}

/*innitialize a file by creating it or overide it if it exists*/
int initializeEntries(tripEntry *entries)
{
	FILE * initfile;
	int count = 0;
	initfile = fopen(TRIP_FILE, "w");
	//append to the open file n close
	readEntry(entries);

	fclose(initfile);

	return 0;
}