/*
geraldm
21.1.14
*/

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main (void)
{

	const int MAX_MINS = 60;
	const int MAX_HRS =24;
	//inputs
	int current_hrs = 0 ;
	int current_mins = 0;

	int sleep_hrs = 0;
	int sleep_mins = 0;

	int wake_hrs = 0;
	int wake_mins = 0;

	//current time
	printf("Enter current time in 24HRS format \n");
	printf("hrs: ");
	scanf("%d", &current_hrs);

	if (current_hrs >=0 && current_hrs < MAX_HRS)
	{
		printf("mins: ");
		scanf("%d", &current_mins);

		if (current_mins >=0 && current_mins< MAX_MINS)
		{
			printf("current time is %02d%02d \n", current_hrs, current_mins);
		}else
		{
			printf("wrong input, mins must be beweeen 0-60 \n");
			exit (EXIT_FAILURE);
		} 

	}else
	{
		printf("wrong input, hrs mustbe between 0-23\n");
		exit (EXIT_FAILURE);
	}



	//sleeping times
	printf("Enter sleep time in hrs and mins format \n");
	printf("hrs: ");
	scanf("%d", &sleep_hrs);


	if (sleep_hrs >= 0 && sleep_hrs < MAX_HRS)
	{
		printf("mins: ");
		scanf("%d", &sleep_mins);

		if (sleep_mins >= 0 && sleep_mins < MAX_MINS)
		{
			printf("sleep time is %02d%02d \n", sleep_hrs,sleep_mins);
		}else
		{
			printf("wrong input, mins must be beweeen 0-60 \n");
			exit (EXIT_FAILURE);
		} 

	}else
	{
		printf("wrong input, hrs mustbe between 0-23 ");
		exit (EXIT_FAILURE);
	}




	//calculate sleeping time

	wake_hrs = current_hrs + sleep_hrs;
	wake_mins = current_mins + sleep_mins;

	if (wake_mins >= MAX_MINS)
	{
		wake_hrs++;
		wake_mins-=60;

	}

	if (wake_hrs >= MAX_HRS )
	{
		wake_hrs -=24; // wake_hrs = wake_hrs - 24
	}

	printf("If you go to bed now you must wake up at %02d:%02d \n", wake_hrs, wake_mins);
	return 0;
}