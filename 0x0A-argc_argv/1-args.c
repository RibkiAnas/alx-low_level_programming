#include <stdlib.h>
#include <stdio.h>

/**
* main - program that prints the number of
* arguments passed into it.
* @argc: The size of the argv array.
* @argv: An array of size argc.
*
* Return: Return 0 (Success).
*/
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
