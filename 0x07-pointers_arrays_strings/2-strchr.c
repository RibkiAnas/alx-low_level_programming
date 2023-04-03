#include "main.h"
#include <stddef.h>

/**
* _strchr - function that locates a character
* in a string.
* @s: string pointer.
* @c: character.
*
* Return: Returns a pointer to the first occurrence
* of the character c in the string s, or NULL if the
* character is not found.
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
