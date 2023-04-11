#include <stdlib.h>
#include "main.h"

/**
* str_concat - function that concatenates two
* string.
* @s1: input an string.
* @s2: input an string.
*
* Return: The returned pointer should point
* to a newly allocated space in memory which
* contains the contents of s1, followed by
* the contents of s2, and null terminated.
*/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		concat[i] = s2[j];
	concat[i] = '\0';

	return (concat);
}
