/*
strut of student
array of students
geraldm
17.3.14
*/
#include<stdio.h>
#pragma warning(disable:4996)

#define SIZE 32
#define STUDENTS_NO 2
struct student
{
	char first_name [SIZE];
	char last_name [SIZE];
	int credits;
};

//functions
void printng(struct student *record);
int main(){

	int i = 0;
	int j = 0;
	struct student record [STUDENTS_NO];

	for ( i = 0; i < STUDENTS_NO; i++)
	{
		
		printf("Enter first name of: \n");
		printf("student %d: ", (i +1));
		scanf("%s", record[i].first_name);

		printf("Enter last name of: \n");
		printf("student %d: ", (i+1));
		scanf("%s", record[i].last_name);

		printf("Enter credits: \n");
		printf("student %d: ", (i +1));
		scanf("%d", &record[i].credits);

		printf("\n");
	}
	printf("\n\n");
	printng(record);
	return 0;
}

void printng(struct student *record)
{
	int i;
	for ( i = 0; i < STUDENTS_NO; i++)
	{
		printf("%-20s", record[i].first_name);
		printf("%-20s", record[i].last_name );
		printf("%5d\n\n", record[i].credits);

	}

}