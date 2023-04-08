#include <stdlib.h>
#include <stdio.h>

/**
* main - program that prints all arguments
* it receives.
* @argc: The size of the argv array.
* @argv: An array of size argc.
*
* Return: Return 0 (Success).
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (EXIT_SUCCESS);
}
