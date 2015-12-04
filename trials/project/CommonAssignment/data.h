#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#define ENTRYLEN 40  /* maximum length of string */

#define BOOKSIZE 100 /* maximum number of entries in phone book */


typedef struct phoneEntry_
{
	char name[ENTRYLEN];
	char addr[ENTRYLEN];
	char city[ENTRYLEN];
	char zip[ENTRYLEN];
	char phone[ENTRYLEN];
} phoneEntry;


#endif