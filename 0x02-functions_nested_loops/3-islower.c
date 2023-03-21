#include "main.h"
#include <stdlib.h>

/**
 * _islower - check the character c if it is lowercase or not.
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned
*/
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
