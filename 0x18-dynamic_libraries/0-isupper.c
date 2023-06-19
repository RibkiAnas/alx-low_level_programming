#include "main.h"

/**
* _isupper - checks for uppercase character.
* @c: The character to check.
*
* Return: Return 1 if c is uppercase 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	if (c >= 97 && c <= 122)
		return (0);
	return (0);
}
