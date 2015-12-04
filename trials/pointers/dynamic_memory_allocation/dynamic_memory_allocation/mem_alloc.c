/*
geraldm
17.2.14
finding the primes in any number allocation
memory allocation to catter only for the primes needed
freed memory(heap) at the end  
*/


#define _STDC_WANT_LIB_EXT1_1
#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
typedef int bool1;
#define false 0
#define true 1
int main(void)
{
	unsigned long long *pPrimes = NULL;
	unsigned long long trial = 0;
	bool1 found = false;							//"wasted" memory expended by storing a two-bit value in an int	
	int total = 0;
	int count = 0;
	int i = 0;

	printf("how many primes: ");
	scanf_s("%d",&total);

	//allocate sufficient memory
	pPrimes = (unsigned long long*)malloc(total*sizeof(unsigned long long));
	if (!pPrimes)
	{
		printf("not enough memory!!!! END");
		return 1;
	}

	//give programme a start
	*pPrimes = 2ULL;
	*(pPrimes+1) = 3ULL;
	*(pPrimes+2) = 5ULL;
	count = 3;
	trial = 5ULL;

	//find primes required

	while (count<total)
	{
		trial += 2ULL;

		for (i = 1; i < count; i++)
		{
			if (!(found = (trial % *(pPrimes + i))))
			{
				break;
			}
		}
		if (found)
		{
			*(pPrimes + count++) = trial;
		}
	}


	//display primes

	for (i = 0; i < total; i++)
	{
		printf("%12llu", *(pPrimes + i));
		if (!((i+1)%5))							//new line after every 5 values
		{
			printf("\n");
		}
	}

	free(pPrimes);
	pPrimes = NULL;
	return 0;
}