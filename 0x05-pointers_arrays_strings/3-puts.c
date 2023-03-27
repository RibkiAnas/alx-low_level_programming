#include "main.h"
#include "_putchar.h"

/**
* _puts - function that prints a string,
* followed by new line, to stdout.
* @str: string to print
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*(str + 1));
	}
	_putchar('\n');
}
