#include "main.h"

/**
* flip_bits - function that returns the
* number of bits you would need to flip to
* get from one number to another.
* @n: number.
* @m: number.
*
* Return: the number of bits you would
* need to flip to get from one number to
* another.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int result = 0;

	while (diff)
	{
		result += diff & 1;
		diff >>= 1;
	}
	return (result);
}
