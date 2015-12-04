#include <stdio.h>
#include <string.h>
#include "data.h"
#pragma warning(disable:4996)
/* returns zero on success */

int writeEntry(tripEntry *entry, int trip_num)
{
	int no_trips = trip_num;
	int count = 0;
	char spacer = ':';

	printf("start loc%-3c", spacer);
	printf("end loc%-3c", spacer);
	printf("init odo_read%-3c", spacer );
	printf("End odo_read%-3c", spacer );
	printf("start time%-3c", spacer );
	printf("end time%-3c \n", spacer);

	for (count = 0; count <= trip_num; count++)
	{
		printf("%-13s", entry[count].start_loc);
		printf("%-15s", entry[count].end_loc);
		printf("%-15d",entry[count].odo_start );
		printf("%-15d",entry[count].odo_end );
		printf("%-10s",entry[count].start_time );
		printf("%-13s", entry[count].end_time);
		printf("\n\n");
	}


	return count;
}


