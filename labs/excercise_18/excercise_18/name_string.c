/*
geraldm
25.2.14
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
#define SIZE 32
int main(void)
{
	int buffer = 2;
	int combined_lenght = 0;
	char first_name[ SIZE ];
	char last_name[ SIZE ];
	char whole_name[ SIZE ];
	char temp[256]= " ";
	char spacer[] = " ";


	printf("Enter your first name:");
	scanf("%s", first_name);
	printf("Enter your last name:");
	scanf("%s", last_name);

	combined_lenght = strlen(first_name)+strlen(last_name) + buffer;


	if (combined_lenght < sizeof(whole_name))
	{
		strcpy(temp, last_name);
		strcat(temp, spacer);
		strcat(temp, first_name);
		strcpy(whole_name, temp);
	}else
	{
		printf("combined name larger than string");
		return 1;
	}
	printf("combined name is: %s \n", whole_name);
	printf("lenght of string %d \n", strlen(whole_name));
	//lenght includes the spacer.

	return 0;
}