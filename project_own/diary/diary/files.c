#include <stdio.h>
#include "data.h"
#include "readers.h"
#include "writers.h"
#pragma warning(disable:4996)

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
		}
		fclose(infile);
		//write to console number of entries in the file
		writeEntry(entries, count);
	}
	return count;
}

/* returns zero if entries were written to file and non-zero if error occurred */
int writeEntries(tripEntry *entries)
{
	FILE * outfile;
	int count = 0;
	outfile = fopen(TRIP_FILE, "a");

	if(outfile != NULL) {
		//only one entry saved at a time
		fwrite(entries, sizeof(tripEntry), 1, outfile);
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
	//create a file deletes everything in it

	printf("Innitialization done \n");
	printf("%s File creaated\n", TRIP_FILE);
	fclose(initfile);

	return 0;
}