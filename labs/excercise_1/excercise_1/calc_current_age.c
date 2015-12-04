
/*
geraldm
current age calculator

*/


#include <stdio.h>
#include <stdlib.h>



int main(void)
{

	//variables
	int birth_day = 11;
	int birth_month = 01;
	int birth_year = 1988;

	int cur_day = 7;
	int cur_month = 01;
	int cur_year = 2014;

	int age = cur_year - birth_year;


	printf( "I was born on %d.%d.%d \n", birth_day, birth_month, birth_year );
	printf( "Today is %d.%d.%d \n" , cur_day, cur_month, cur_year);
	printf( "I am %d years old \n", age);
	return 0;
}