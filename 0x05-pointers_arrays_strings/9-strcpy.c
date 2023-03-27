#include "main.h"

/**
* _strcpy - function that copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest.
* @dest: copy to.
* @src: copy from.
*
* Return: Return the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int x, i = 0;

	while (*(src + i) != '\0')
		i++;
	for (x = 0; x < i; x++)
		dest[x] = src[x];
	dest[i] = '\0';
	return (dest);
}
