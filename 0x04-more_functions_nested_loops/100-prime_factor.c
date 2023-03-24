#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point.
*
* Return: Return 0 (success)
*/
int main(void)
{
	long int n = 612852475143;
	int i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%d\n", i);
	return (0);
}
