#include "main.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int.
* @b: pointing to a string of 0 and 1 chars.
*
* Return: the converted number.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n = n * 2 + (b[i] - '0');
	}
	return (n);
}
