#include "main.h"

/**
* print_times_table - prints the n times table
* @n: numbers of times to print table
*/
void print_times_table(int n)
{
	int i, j, res;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (j == 0)
					_putchar(res + '0');
				if (res < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				else if (res >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
