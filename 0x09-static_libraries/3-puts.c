#include "main.h"
#include<stdio.h>
/**
* _puts - function that prints a string,
* followed by new line, to stdout.
* @str: string to print
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
