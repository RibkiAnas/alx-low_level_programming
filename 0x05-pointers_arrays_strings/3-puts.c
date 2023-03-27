#include "main.h"
#include "_putchar.h"

/**
* _puts - function that prints a string,
* followed by new line, to stdout.
* @str: string to print
*/
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*(str + i));
		i++;
		if (*str == '\0')
			break;
	}
	_putchar('\n');
}
