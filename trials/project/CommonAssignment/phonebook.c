#include <stdio.h>

#include "data.h"
#include "files.h"
#include "readers.h"


void printMenu(void);

int main(int argc, char *argv[])
{
	phoneEntry book[BOOKSIZE + 1] = { "" }; /* +1 to reserve space for terminator */
	int selection = -1;

	do {
		printMenu();
		/* loop until user enters a number */
		while(readInt(&selection)) {
			printf("Invalid selection\n");
			printMenu();
		}
		/* check which option was selected */
		switch (selection)
		{
		case 1:
			printf("Not implemented yet\n");
			break;
		case 2:
			printf("Not implemented yet\n");
			break;
		case 3:
			printf("Not implemented yet\n");
			break;
		case 4:
			printf("Not implemented yet\n");
			break;
		default:
			printf("Invalid selection\n");
			break;
		}
		
	} while(selection);

	return 0;
}


void printMenu(void)
{
	printf("Select action (0-9)\n");
	printf("1 - do something\n");
	printf("0 - Exit program\n");
}
