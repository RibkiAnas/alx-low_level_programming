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

		for (k = j; str[k] != ' ' && str[k]; k++)
			;
		words[i] = malloc(sizeof(char) * (k - j + 1));
		if (words[i] == NULL)
		{
			for (len = 0; len < i; len++)
				free(words[len]);
			free(words);
			return (NULL);
		}

		for (len = 0; j < k; j++, len++)
			words[i][len] = str[j];
		words[i][len] = '\0';
	}
	words[i] = NULL;
	return (words);
}
