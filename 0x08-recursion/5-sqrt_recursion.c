#include "main.h"

/**
* _sqrt_recursion - function that returns
* the natural square root of a number.
* @n: input a number.
*
* Return: returns the natural square root
* of a number.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion(n / 2) * 2 == n ? _sqrt_recursion(n / 2) : -1);
}
