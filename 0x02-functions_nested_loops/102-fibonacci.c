#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Return 0 (Success)
*/
int main(void)
{
	int fib[50], i, j;

	fib[0] = 1;
	fib[1] = 2;
	for (i = 2; i < 50; i++)
		fib[i] = fib[i - 1] + fib[i - 2];
	for (j = 0; j < 50; j++)
	{
		printf("%d", fib[j]);
		if (j < 50 - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
