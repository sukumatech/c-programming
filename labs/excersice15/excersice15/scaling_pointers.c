/*
geraldm
25.2.14
*/
#include <stdio.h>
#pragma warning(disable:4996)

//fuction definitions
void scale( float *x, float *y);
int errors( float x, float y);

int main(void)
{
	float value_one = 0.0;
	float value_two = 0.0;
	int error_value = 0;
	//get values

	do
	{
		printf("Enter 1. number: ");
		scanf("%f", &value_one);
		printf("Enter 2. number: ");
		scanf("%f", &value_two);
		error_value = errors(value_one, value_two);
	} while (error_value !=0);



	scale(&value_one, &value_two);

	printf("1. %.4f \n", value_one);
	printf("2. %.4f \n", value_two);

	return 0;
}

void scale( float *p_value_one, float *p_value_two)
{
	
	if (*p_value_one > *p_value_two)
	{
		*p_value_two = *p_value_two / *p_value_one;
		*p_value_one = 1;
	}
	if (*p_value_two > *p_value_one)
	{
		*p_value_one = *p_value_one / *p_value_two;
		*p_value_two = 1;
	}
	if (*p_value_one == *p_value_two)
	{
		*p_value_one = 1;
		*p_value_two = 1;
	}

}
int errors( float x, float y)
{
	int value = 0;
	if (x<0)
	{
		printf("Value 1 must be positive \n");
		value = 1;
	}
	if (y<0)
	{
		printf("Value 2 must be positive \n");
		value = 1;
	}
	return value;
}
