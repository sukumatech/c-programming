#include <stdio.h>
#include <string.h>

int main(void)
{
	char multiple[] = "my string";
	char *p = &multiple[0];
	int i= 0;
	printf("The address of the first array element is: %p\n", p);

	p = multiple;

	printf("address attained from the array name is: %p\n\n\n", p);

	//going through array with pointers

	for (i = 0; i < strnlen_s(multiple, sizeof(multiple)); i++)
	{
		printf("multiple[%d] = %c *(p+%d) = %c &multiple[%d] = %p p+%d = %p \n",
			i,multiple[i], i, *(p+i), i, &multiple[i], i, p+i);
	}

	return 0;
}