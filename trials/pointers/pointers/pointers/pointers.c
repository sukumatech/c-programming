#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int number = 0;
	int *pnumber = 0;

	number =10;
	printf("number's adresss: %p\n", &number);
	printf("number's value: %d \n\n", number);

	pnumber = &number;

	printf("pnumbers address: %p \n", (void*)&pnumber);
	printf("pnumbers size: %zd \n", sizeof(pnumber));
	printf("pnumbers value: %p \n", pnumber);
	printf("pnumbers points to value: %d \n", *pnumber);

	printf("Enter a Number:");
	scanf("%d",pnumber);

	printf("number entred was, %d \n", number);

	return 0;
}