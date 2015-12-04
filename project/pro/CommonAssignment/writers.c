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
	int error = 0;
	printf("start location: ");
	if(writeString(entry->start_loc, ENTRYLEN)) error++;

	printf("end location: ");
	if(writeString(entry->end_loc, ENTRYLEN)) error++;

	printf("innitial odometer reading : ");
	if(writeInt(&entry->odo_start)) error++;

	printf("final odometer reading: ");
	if(writeInt(&entry->odo_end)) error++;

	printf("start time: ");
	if(writeString(entry->start_time, ENTRYLEN)) error++;

	printf("end time: ");
	if(writeString(entry->end_time, ENTRYLEN)) error++;
	return error;
}
