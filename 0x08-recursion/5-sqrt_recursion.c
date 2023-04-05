#include "main.h"

int helper(int n, int i);

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
	return (helper(n, 0));
}

/**
* helper - function that find square root.
* @n: input a number.
* @i: iterator.
*
* Return: Return natural square root or -1
* if not found.
*/

int helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (helper(n, i + 1));
}
