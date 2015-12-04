#ifndef DATA_H_INCLUDED
#include <time.h>

#define DATA_H_INCLUDED
#define ENTRYLEN 16  /* maximum length of string */
#define TRIPSIZE 5 /* maximum number of entries in phone book */


typedef struct tripEntry_
{
	char start_loc[ENTRYLEN];
	char end_loc[ENTRYLEN];
	int odo_start;
	int odo_end;
	char start_time[ENTRYLEN];
	char end_time[ENTRYLEN];
	//struct tm start_time;
	//struct tm end_time;

} tripEntry;


#endif