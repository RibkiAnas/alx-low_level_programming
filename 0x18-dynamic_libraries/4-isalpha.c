#include "main.h"

/**
 * _isalpha - check the character c if it is alphabetic or not.
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
