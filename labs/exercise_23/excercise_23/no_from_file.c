/*
//file operations
geraldm
27.3.14
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#pragma warning(disable:4996)

#define SIZE 36

int main (void){
	//pointer to file
	FILE *pfile = NULL;
	//enter name of file
	char filename[12] = "";
	char data[SIZE] ;
	float sum = 0.0;
	float average_num = 0.0;
	int count = 0;


	printf("Enter file name: ");
	scanf("%s", filename);

	//open file and assign to pointer
	pfile = fopen(filename, "r");

	if(pfile != NULL)
	{
		while (fgets(data, SIZE, pfile) != NULL && !feof(pfile))
			//and when end of file is not reached
		{
			sum += atof(data); 
			count++;
		}

	}else{
		printf("Error opening %s for writing. Program terminated.", filename);
		exit(1);
	}
	fclose(pfile);

	average_num = sum/count;
	printf("Read %d numbers\n", count);
	printf("Average value is: %.2f \n", average_num);
	return 0;
}