#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* _calloc - function that allocates memory for an
* array, using malloc.
* @nmemb: input an number.
* @size: input an size.
*
* Return: The _calloc function allocates memory
* for an array of nmemb elements of size bytes
* each and returns a pointer to the allocated
* memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
