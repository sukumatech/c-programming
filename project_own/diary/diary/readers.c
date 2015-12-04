#include <stdio.h>
#include <string.h>
#include "data.h"
#include "files.h"
#pragma warning(disable:4996)

/* returns zero on success */
int readString(char *str, int maxsize)
{
	int len = 0;
	if(fgets(str, maxsize, stdin) == NULL) {
		return -1;
	}
	len = strlen(str);
	if(str[len - 1] == '\n') str[len - 1] = '\0';

	return 0;
}


/* returns zero on success */
int readInt(int *value)
{
	char tmp[40];

	if(fgets(tmp, 40, stdin) == NULL) {
		return -1;
	}
	if(sscanf(tmp, "%d", value) != 1) {
		return -2;
	}

	return 0;
}


int readEntry(tripEntry *entry)
{
	int error = 0;
	printf("Enter start location: ");
	if(readString(entry->start_loc, ENTRYLEN)) error++;

	printf("Enter end location: ");
	if(readString(entry->end_loc, ENTRYLEN)) error++;

	printf("Enter innitial odometer reading : ");
	if(readInt(&entry->odo_start)) error++;

	printf("Enter final odometer reading: ");
	if(readInt(&entry->odo_end)) error++;

	printf("Enter start time: ");
	if(readString(entry->start_time, ENTRYLEN)) error++;

	printf("Enter end time: ");
	if(readString(entry->end_time, ENTRYLEN)) error++;
	
	printf("\n\n");
	printf("save data?????");
	printf("\n\n");
	
	return error;

}

