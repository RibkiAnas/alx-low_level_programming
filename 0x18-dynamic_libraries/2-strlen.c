#include "main.h"

/**
* _strlen - function that return the length
* of a string.
* @s: given string.
*
* Return: Return length of a string.
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
