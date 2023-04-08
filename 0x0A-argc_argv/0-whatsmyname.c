#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* main - program that prints its name
* followed by new line.
* @argc: The size of the argv array.
* @argv: An array of size argc.
*
* Return: Return 0 (Success).
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (EXIT_SUCCESS);
}
