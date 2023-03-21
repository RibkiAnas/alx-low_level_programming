#include "main.h"

/**
 * print_last_digit - print the last digit of a number n.
 * @n: The number to computes
 *
 * Return: Last digit of a number.
*/
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		_putchar(-lastDigit + '0');
		return (-lastDigit);
	}
	else
	{
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
