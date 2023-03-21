#include <stdio.h>

/**
* main - Entry point
*
* Return: Return 0 (success)
*/
int main(void)
{
	int c, sum = 0;
	int a = 1;
	int b = 2;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
			sum += b;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", sum);

	return (0);
}
