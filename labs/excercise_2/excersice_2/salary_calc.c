
/*
geraldm
employment calculator

*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	//variables
	float salary = 1000;
	float tax_percent = 10;
	float raise = 200;

	float tax_ammount = (salary * tax_percent) / 100;
	float net_income = salary - tax_ammount;

	float new_salary = salary + raise;
	float new_net_income = new_salary - (new_salary * tax_percent/100);


	printf("my salary is %.2f. Euros\n", salary);
	printf("My tax percentage is %.1f percent. \n", tax_percent);
	printf("I have to pay %.2f euros tax. \n", tax_ammount);
	printf("I have %.2f euros to spend or save. \n", net_income);
	printf("My boss raises my salary by %.0f euros. \n", raise);
	printf("My new salary is %.2f euros. \n", new_salary);
	printf("After taxes I have %.2f euros. \n", new_net_income);
	return 0;
}