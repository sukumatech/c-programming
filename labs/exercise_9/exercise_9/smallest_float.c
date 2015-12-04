#include <stdio.h>
#pragma warning(disable:4996)
#define ARRAY_SIZE 5

void conversions(float rate, float *p_curency, int size);
int main(void)
{
	float currency[ARRAY_SIZE] = {0};
	int i;
	const float ex_rate = 1.5;
	//int size = ARRAY_SIZE;

	printf("Enter rate: " );
	scanf("%f", &ex_rate);

	for ( i = 0; i < ARRAY_SIZE; i++)
	{
		printf("Enter amount %d: ", i+1);
		scanf("%f", &currency[i]);
	}

	printf("The converted values are: \n");

	conversions(ex_rate, currency, ARRAY_SIZE);

	for ( i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%.2f \n", currency[i]);
		
	}

	return 0;
}


void conversions(float rate, float *p_curency, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		p_curency [i] = rate * p_curency[i];
	}
}
