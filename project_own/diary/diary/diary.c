#include <stdio.h>

#include "data.h"
#include "files.h"
#include "readers.h"

void printMenu(void);
void removeEntry(tripEntry *entry);

int main(int argc, char *argv[])
{
	tripEntry trip[TRIPSIZE + 1] = { "" }; /* +1 to reserve space for terminator */
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
			initializeEntries(trip);
			break;
		case 2:
			writeEntries(trip);
			break;
		case 3:
			readEntries(trip);
			break;
		case 4:
			readEntry(trip);
			break;
		case 5:
			printf("Not implemented yet\n");
			break;
		case 6:
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
	printf("1 - Initialize\n");
	printf("2 - Save trip data\n");
	printf("3 - Read trip data\n");
	printf("4 - Add new trip\n");
	printf("5 - Remove trip\n");
	printf("6 - Print report\n");
	printf("0 - Exit program\n");
}
void removeEntry(tripEntry *entry)
{
	int records = readEntries(entry);
	int count = 0;

	fflush(stdin);
    printf("Enter start time\n");
    scanf("%d",&enrollNo);
 
    while(count!=records)
    {
        fread(&var,sizeof(struct student),1,ptr);
        if(var.enrollNo==enrollNo)
        {
            var.name[0]='\0';
            var.semCode[0]='\0';
            var.enrollNo=-1;
            var.assignSub=0;
            var.marks=-1;
        }
        counter++;
    }
    fwrite(&var,sizeof(struct student),1,ptr);
    refresh();

}