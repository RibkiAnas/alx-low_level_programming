#include <stdlib.h>
#include "main.h"

/**
* _strdup - function that returns a pointer to
* a newly allocated space in memory, which
* contains a copy of the string given as a
* parameter.
* @str: input an string.
*
* Return: returns a pointer to a new string
* which is a duplicate of the string str.
*/
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}
