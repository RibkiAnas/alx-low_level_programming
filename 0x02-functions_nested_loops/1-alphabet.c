#include "main.h"

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
	for (char c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
