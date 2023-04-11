#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* strtow - function that splits a string into
* words.
* @str: input an string.
*
* Return: returns a pointer to an array of
* strings (words).
*/
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < count; i++)
	{
		while (str[j] == ' ')
			j++;

		for (len = 0; str[j + len] != ' ' && str[j + len]; len++)
			;
		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[i][k] = str[j + k];
		words[i][k] = '\0';
		j += len;
	}
	words[i] = NULL;
	return (words);
}
