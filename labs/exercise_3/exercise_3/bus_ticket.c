/*
geraldm
14.01.14

*/
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double price_ticket = 10.0;
	double funds_available = 1.0;
	double funds_left = 0.0;
	//input data
	printf("Enter price of bus ticket: \n");
	scanf("%lf", &price_ticket);
	printf("Enter how much money you have: \n");
	scanf("%lf", &funds_available);

	funds_left = funds_available - price_ticket;


	if (price_ticket <= funds_available){
		printf(" You have enough money for a bus ticket.\n");
		printf("You have %.2f euros left.\n", funds_left);
	}else{

		printf("You do not have enough money for a bus ticket. \n");
		printf("You need %.2f euros more to buy a ticket. \n", -funds_left);
	}


	return 0;
}