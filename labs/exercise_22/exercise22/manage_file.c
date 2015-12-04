/*
//file operations
geraldm
20.3.14
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#pragma warning(disable:4996)

#define SIZE 36

int main (void){
	FILE *pfile = NULL;
	//enter name of file
	char filename[12] = "";
	char data[SIZE] ;
	char *pos;
	int i;
	char close[] = ".\n";

	printf("Enter file name: ");
	scanf("%s", filename);

	//open file n assign to pointer
	pfile = fopen(filename, "w");

	//text
	printf("Enter text. Enter single dot to quit. \n");

	if(pfile != NULL)
	{
		while (fgets( data, SIZE, stdin) != NULL && strcmp(close, data))
		{
			//write first letter to upper
			data[0] = toupper(data[0]);

			//write the rest to lower
			for (i = 1; i <SIZE; i++)
			{
				data[i]= tolower(data[i]);
			}

			//print to file
			fprintf(pfile, "%s", data);
			
		}
		fclose(pfile);
	}else{
		printf("Error opening %s for writing. Program terminated.", filename);
		exit(1);
	}

	return 0;
}