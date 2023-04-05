#include "main.h"

int length(char *s);
int helper(char *s, int start, int end);
/**
* is_palindrome - function that returns 1
* if a string is a palindrome and 0 if not.
* @s: input an string.
*
* Return: Return 1 if a string is a palindrome
* and 0 if not.
*/
int is_palindrome(char *s)
{
	int len = length(s);

	return (helper(s, 0, len - 1));
}

/**
* length - function that count length of string
* @s: input an string.
*
* Return: Return length of string.
*/
int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}

/**
* helper - function that takes a string s
* as an argument and returns 1 if the string
* is a palindrome and 0 if it is not.
* @s: input an string.
* @start: input an number.
* @end: input an number.
*
* Return: Return 1 if the string is a palindrome
* and 0 if it is not.
*/
int helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (helper(s, start + 1, end - 1));
}
