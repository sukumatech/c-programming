#include <stdio.h>
#pragma warning(disable:4996)

#define LENGHT 12
int main (void)
{
	//variables
	//const int LENGHT = 12;
	int array_12_dgts[LENGHT]  ; // If possible to include variable in an array
	int index = 0;
	int i, j;

	printf("Enter starting number: ");
	scanf("%d", &index);

	for ( i = 0; i < LENGHT; i++)
	{
		array_12_dgts[i] = i + index;
	}


	for ( j = 0; j < LENGHT; j++)
	{
		printf("Values %d is: %d\n", j, array_12_dgts[j]);
	}
	return 0;
}