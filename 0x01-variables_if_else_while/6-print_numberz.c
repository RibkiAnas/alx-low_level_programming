#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Return 0 (Success)
*/
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}

	putchar('\n');

	return (0);
}
