/*
geraldm
15.1.2014

condition ? expression1 : expression2
*/

#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)

int main(void)
{
	char text[100];
	time_t now = time(NULL);
	struct tm *t = localtime(&now);


	strftime(text, sizeof(text)-1, "%H:%M:%S", t);
	printf("Current Date: %s \n", text);

	return 0;
}