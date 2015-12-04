#include <stdio.h>
#pragma warning(disable:4996)
#define ARRAY_SIZE 10

int main(void)
{
	int value_dgts[ARRAY_SIZE] = {0};
	int i, j;
	int sum_array = 0;

	for ( i = 0; i < ARRAY_SIZE; i++)
	{
		printf("Enter value for element %d: ", i);
		scanf("%d", &value_dgts[i]);

		if (value_dgts[i] < 0)
		{
			printf("value must be positive!!!!!!! \n");
			i--;
		}
	}

	for ( j = 0; j < ARRAY_SIZE; j++)
	{
		sum_array += value_dgts[j];
	}

	printf(" The sum of %d numbers in your array is: %d \n",ARRAY_SIZE, sum_array);
	return 0;
}

