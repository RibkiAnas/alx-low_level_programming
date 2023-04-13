#include <stdlib.h>
#include "main.h"

/**
* array_range - function that creates an array of
* integers.
* @min: input an minimum.
* @max: input an maximum.
*
* Return: the pointer to the newly created array.
*/
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;
	return (arr);
}
