/*
geraldm
28.1.14
*/

#include <stdio.h>
#pragma warning(disable:4996)

//#define INTREST 0.10
//functions
float errors (float x);
float calc_intrest(float x, float y, float z);
//variables
float loan = 0.0;
float intrest = 0.0;
float payment = 0.0;
float amount_owed = 0.0;
int error_results = 0;


int main (void)
{


	do
	{
		printf("Enter Loan Amount: ");
		scanf ("%f", &loan);
		error_results = errors(loan);

		printf("Enter intrest (percent): ");
		scanf("%f", &intrest);
		error_results = errors(intrest);	

	} while (error_results != 0); //errors available

	//innitiate and test the function
	//amount_owed = calc_intrest(loan, intrest, payment );

	amount_owed = loan;
	//offer recursive payment entry offer
	if (amount_owed != 0)
	{
		do
		{
			printf("You Owe: %.2f Euros \n\n", amount_owed);
			printf("Enter payment: ");
			scanf("%f", &payment);
			//error_results = errors(payment); ............ how do to implement errors
			amount_owed = calc_intrest(loan, intrest, payment );

		} while (amount_owed > 0);

	}

	return 0;
}


//Function definition

float errors(float x)
{
	float result = 0;
	const float MINIMUM = 0.01;
	if (x < MINIMUM)
	{	
		//printf("%f Value must be positive", x);
		result = 1;
	}
	return result;
} 
float calc_intrest(float x, float y, float z)
{
	amount_owed = x - (z - (x * y/100 ));
	loan = amount_owed;

	return amount_owed;
}

