#include <stdlib.h>
#include "main.h"

/**
 * is_space - function that returns true if c is a space character.
 * @c: input a character.
 *
 * Return: true if c is a space character.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - function that returns counts the number of words in str.
 * @str: input an string.
 *
 * Return: Counts the number of words in str
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i])
	{
		if (!is_space(str[i]))
		{
			count++;
			while (str[i] && !is_space(str[i]))
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	return (count);
}

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
	int i, j, k;
	int word_count = count_words(str);
	char **words = malloc((word_count + 1) * sizeof(char *));

	if (!str || !*str)
		return (NULL);
	if (!words)
		return (NULL);

	i = 0;
	while (*str)
	{
		if (!is_space(*str))
		{
			j = 0;
			while (str[j] && !is_space(str[j]))
				j++;
			words[i] = malloc((j + 1) * sizeof(char));
			if (!words[i])
			{
				for (k = 0; k < i; k++)
				{
					free(words[k]);
				}
				free(words);
				return (NULL);
			}
			for (k = 0; k < j; k++)
				words[i][k] = str[k];

			words[i][j] = '\0';
			i++;
			str += j;
		}
		else
			str++;
	}
	words[word_count] = (NULL);
	return (words);
}
