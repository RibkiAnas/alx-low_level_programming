#include "main.h"

/**
* _strncpy - function that copies a strings.
* @dest: destination
* @src: source
* @n: bytes from src
*
* Return: Return copies of strings.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
