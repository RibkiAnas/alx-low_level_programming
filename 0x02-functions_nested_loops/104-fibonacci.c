#include <stdio.h>

/**
* main - Entry point
*
* Return: Return 0 (success)
*/
int main(void)
{
	int i, c;
	int a = 1;
	int b = 2;

	printf("%d, %d", a, b);
	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
