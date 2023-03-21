#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* Return: Return 0 (Success)
*/
int main(void)
{
	print_alphabet();
	return (0);
}

/**
* print_alphabet - prints alphabet in lowercase
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
