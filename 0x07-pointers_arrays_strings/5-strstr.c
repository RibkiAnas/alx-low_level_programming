#include "main.h"
#include <stddef.h>

/**
* _strstr - function that locates a substring.
* @haystack: input string.
* @needle: input substring.
*
* Return: Returns a pointer to the beginning
* of the located substring, or NULL if the substring
* is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
