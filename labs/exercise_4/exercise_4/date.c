/*
geraldm
14.1.14
*/
#pragma warning(disable:4996)
#include <stdio.h>

int main (void)
{
	int day = 0;
	int month = 0;
	int year = 0;
	int days_month;
	

	printf("Enter todays date (d.m.y) \n");
	printf("day: ");
	scanf("%d", &day);
	printf("month: ");
	scanf("%d", &month);
	printf("year: ");
	scanf("%d", &year);

	printf("\n \nTodays date (d.m.y): %d . %d . %d \n \n", day, month, year);



	

	//not required cause we can get values directlly from idividual the value of the month
/*	enum month_in_year
	{
		jan = 1,
		feb,
		mar,
		apr,
		may,
		jun,
		jul,
		aug,
		sep,
		oct,
		nov,
		dec
	};
	enum month_in_year days_month = jan;

	*/

	//statements to write tommorows date
	//switch statements for month selection
	switch (month)

	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		days_month = 31;
		break;
	case 4: case 6: case 9: case 11:
		days_month = 30;
		break;
	case 2:
		days_month = 28;
		break;
	default:
		days_month = 0;
		break;
	}



	//conditions to check end of year;

	if (day == days_month && month < 12){
		day = 1;
		month = month + 1;
		year = year;
	}else if (day == days_month && month == 12){
		day = 1;
		month = 1;
		year = year + 1;
	}else
	{
		day = day + 1;
		month = month;
		year = year;
	}

	printf("Tommorows date (d.m.y): %d . %d. %d \n \n", day, month, year);
	return 0;
}