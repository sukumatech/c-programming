/*
using struts
geraldm
17.3.14
*/

#include <stdio.h>
#pragma warning(disable:4996)

struct month
{
	int no ;
	char name[20];
};

//FUNCTIONS
void print(struct month);
int month_check(struct month);

int main(){

	struct month record1;
	struct month record2;
	int error_check = 0;

	printf("Enter information about first month: \n");
	//first month
	do
	{
		printf("Enter month no: ");
		scanf("%d", &record1.no);
		error_check = month_check(record1);
	}while (error_check != 0);

	printf("Enter name of month: ");
	scanf("%s", &record1.name);

	printf("Enter information about last month of year: \n");
	//last month

	do
	{
		printf("Enter month no: ");
		scanf("%d", &record2.no);
		error_check = month_check(record2);
	}while (error_check !=0);

	printf("Enter name of month: ");
	scanf("%s", &record2.name);

	//print the information
	printf("You entered the following months: \n");
	print(record1);
	print(record2);
	return 0;
}

void print(struct month record){

	printf("%d. ", record.no);
	printf("%s \n", record.name);
}

int month_check(struct month record ){
int error=0;
	if (record.no > 12 || record.no < 0)
	{
		printf("Month number must be in range 1-12! \n");
		error = 1;
	}else
	{
		error = 0;
	}
	return error;
}