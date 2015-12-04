#include <stdio.h>
#include <string.h>
#include "data.h"

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


int readEntry(phoneEntry *entry)
{
	int error = 0;
	printf("Enter name: ");
	if(readString(entry->name, ENTRYLEN)) error++;

	printf("Enter street address: ");
	if(readString(entry->addr, ENTRYLEN)) error++;

	printf("Enter city: ");
	if(readString(entry->city, ENTRYLEN)) error++;

	printf("Enter zip code: ");
	if(readString(entry->zip, ENTRYLEN)) error++;

	printf("Enter phone number: ");
	if(readString(entry->phone, ENTRYLEN)) error++;

	return error;
}
