#include "main.h"

/**
* _strlen_recursion - function that returns
* the length of a string.
* @s: input a string.
*
* Return: Return length of a string.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
