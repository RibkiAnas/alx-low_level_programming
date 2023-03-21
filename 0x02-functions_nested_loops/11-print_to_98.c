#include <stdlib.h>
#include "main.h"

/**
* print_to_98 -  prints all natural numbers from n to 98,
* followed by a new line.
* @n: given number
*
*/
void print_to_98(int n)
{
	int i, j;

	for (i = n; i <= 98; i++)
	{
		_putchar(n + '0');
		_putchar(i + '0');
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			_putchar(n + '0');
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
