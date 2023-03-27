#include "main.h"

/**
* swap_int - function that swap
* the values of two integers.
* @a: pointer to an int
* @b: another pointer to an int
*/
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
