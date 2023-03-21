#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check the character c if it is alphabetic or not.
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned
*/
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
