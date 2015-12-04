#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>

int main (void)
{
	int selection;
	int op1 = 0 ;
	int op2 =0 ;
	float result = 0;
	do {
		printf("Available operations:\n");
		printf("1) Enter operands\n");
		printf("2) Multiply\n");
		printf("3) add\n");
		printf("4) Exit program\n");

		//selection
		printf("Please select operation:\n");
		scanf("%d", &selection);
		switch(selection) {

		case 1:
			//enter the operators
			printf("Enter operator 1: ");
			scanf("%d", &op1);
			printf("Enter operator 2:");
			scanf("%d", &op2);
			break;
		case 2:
			result = op1 * op2;
			printf("Result of computation is %.2f \n", result);
			break;

		case 3:
			result = op1 + op2;
			printf("Result of computation is %.2f \n", result);
			break;
		default:
			printf("out of scope \n");
			exit (EXIT_FAILURE);        // is default needed for failure cases in switch statement
			break;
		}

		//break if result is not 0

		
	} while(selection != 4);


	return 0;
}