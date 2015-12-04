/*
//file operations
read and multiply numbers
geraldm
27.3.14
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#pragma warning(disable:4996)

#define SIZE 36
int multiply (int num1, int num2);
int main (void){
	//pointer to file
	FILE *pfile = NULL;
	char *endptr = NULL;
	int no1, no2 = 0;
	int answer = 0;
	int count = 1;


	//enter name of file
	char filename[12] = "";
	char data[SIZE] ;

	printf("Enter file name: ");
	scanf("%s", filename);

	//open file and assign to pointer
	pfile = fopen(filename, "r");

	if(pfile != NULL)
	{
		printf("%s OPENED \n", filename);
		while (fgets(data, SIZE, pfile) != NULL && feof != NULL)
			//and when end of file is not reached
		{

			//check for valid input
			if (isdigit(data[0]) && isdigit(data[2])) 
			{
				no1 = strtol(data, &endptr, 10);
				no2 = strtol(endptr, &endptr, 10);
				answer = multiply(no1, no2);

			}else
			{
				printf("ERORR!!! %d not valid format \n", count);
			}

			//out put
			printf("%d * %d = %d \n", no1, no2, answer);
			count++;
		}

	}
	//if file doesnt exist
	if(pfile == NULL)
	{
		printf("Error opening %s for writing. Program terminated.", filename);
		exit(1);
	}
	fclose(pfile);

	return 0;
}


//function
int multiply (int num1, int num2)
{
	int result = 0;
	result = num1 * num2;
	return result;
}

