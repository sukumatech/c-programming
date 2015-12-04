#include <stdio.h>
#include <string.h>
#include "data.h"
#pragma warning(disable:4996)
/* returns zero on success */
int writeString(char *str, int maxsize)
{
	int len = 0;
	if(fgets(str, maxsize, stdout) == NULL) {
		return -1;
	}
	len = strlen(str);
	if(str[len - 1] == '\n') str[len - 1] = '\0';

	return 0;
}


/* returns zero on success */
int writeInt(int *value)
{
	char tmp[40];

	if(fgets(tmp, 40, stdout) == NULL) {
		return -1;
	}
	if(sscanf(tmp, "%d", value) != 1) {
		return -2;
	}

	return 0;
}


int writeEntry(tripEntry *entry)
{
	//int no_trips = readEntries(entry);
	int count = 0;

	for (count = 0;  count <= TRIPSIZE; count++)
	{
		printf("start location: %s \n", entry[count].start_loc);
		printf("end location: %s \n", entry[count].end_loc);
		printf("innitial odometer reading: %d \n ",entry[count].odo_start );
		printf("final odometer reading: %d \n",entry[count].odo_end );
		printf("start time: %s \n",entry[count].start_time );
		printf("end time: %s \n", entry[count].end_time);
	}

	printf("count");
	return count;
}
