#include <stdio.h>
#include <stddef.h>
int main(void)
{
  char first = 'A';
  char second = 'B';
  char last = 'Z';
  int m[3][3];
int x = 0;
int i, j;
int sum = 0;
  char number = 40;

  char ex1 = first + 2;             /* Add 2 to 'A'        */
  char ex2 = second - 1;            /* Subtract 1 from 'B' */
  char ex3 = last + 2;              /* Add 2 to 'Z'        */

  printf("Character values      %-5c%-5c%-5c", ex1, ex2, ex3);
  printf("\nNumerical equivalents %-5d%-5d%-5d", ex1, ex2, ex3);
  printf("\nThe number %d is the code for the character %c\n", number, number);


for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
m[i][j] = i + j;
    }
}

for ( i = 0; i < 3; i++) {
    for ( j = 0; j < 3; j++) {
sum += m[i][j];
    }
}

printf("%d",sum);
  /*enum month
  {
	  jan = 31,
	  feb,
	  mar,
	  apr,
	  may,
	  june,
	  july,
	  aug,
	  sep,
	  oct,
	  nov,
	  dec
  };

  //printf ("%d", feb);*/
  return 0;
}