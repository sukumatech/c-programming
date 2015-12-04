/*
geraldm
25.2.14
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

#define SIZE 52
#define NO_QUEST 3

//functions
int form(char *question, char *answer, int size);
int main(void)
{
	char questions[NO_QUEST][SIZE] ={
		"your name:", 
		"your address:", 
		"postal code:"};
	char answers [NO_QUEST][SIZE];
	int size_answer = SIZE - 1;
	int i = 0;

	int *panswer_size = &size_answer;

	printf("QUESTIONS \n");
	//struts!!????
	//loop through the function
	for (i = 0; i < NO_QUEST; i++)
	{
		form(questions[i], answers[i], size_answer);
	}

	//print the answers
	printf("\n\n ADDRESS \n");
	for (i = 0; i < NO_QUEST; i++)
	{
		printf("%s \n",answers[i]);
	}

	return 0;
}
int form(char *question , char *answer, int size)
{
	char *pos;
	printf("%s", question);
	fgets(answer, size, stdin);
	//scanf("%s", answer);
	//getting rid of the trailing \n character
	if ((pos=strchr(answer, '\n')) != NULL)
		*pos = '\0';

}