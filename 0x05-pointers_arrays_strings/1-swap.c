#include "main.h"

/**
* swap_int - function that swap
* the values of two integers.
*/
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
