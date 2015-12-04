/*
geraldm
11.2.14

*/
#include <stdio.h>
#pragma warning(disable:4996)

int bounds (int lower, int upper);
int main (void)
{

	int para_one = 0;
	int para_two = 0;
	int multiply = 0;
	para_one = bounds(10, 20);
	para_two = bounds(0, 5);

	multiply = para_one * para_two;
	printf("%d multiplied by % d is equal to %d \n", para_one, para_two , multiply);
	return 0;
}

int bounds (int lower, int upper)
{
	int value = 0;
	do
	{
		printf("Enter a number [%d - %d]: ", lower, upper);
		scanf("%d", &value);
		if (value < lower)
		{
			printf("value is tooo low \n");
		}
		if (value > upper)
		{
			printf("value is tooo high \n");
		}

	} while (value < lower || value > upper);
	return value;
}
