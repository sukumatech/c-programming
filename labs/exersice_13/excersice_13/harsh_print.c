/*

geraldm
11.2.14

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//declaire function
void harsh_print (int harsh_amount);

int main (void)
{
	int value = 0;
	const int PRINT_TIMES = 10;
	int j = 0;

	srand(time(NULL)); // this initializes generator seed value



	//used to print ten times


	for (j = 0; j < PRINT_TIMES; j++)
	{
		value = rand() % 20 + 1; // value in the range 1-20
		harsh_print(value);
		printf("\n");
	}

	harsh_print(value);
	return 0;
}

//implimentation
void harsh_print (int harsh_amount)
{
	int i = 0;
	for (;i < harsh_amount; i++)
	{
		printf("#");
	}
	//return 0;
}