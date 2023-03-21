#include "main.h"

/**
 * print_sign - check the number n if it is sign or not.
 * @n: The number to check
 *
 * Return: On success 1.
 * On error, 0 is returned
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
