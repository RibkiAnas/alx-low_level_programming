#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
* main - program that adds positive numbers.
* @argc: The size of the argv array.
* @argv: An array of size argc.
*
* Return: Return 0 (Success).
*/
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *arg = argv[i];

			for (j = 0; arg[j]; j++)
			{
				if (!isdigit(arg[j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(arg);
		}
		printf("%d\n", sum);
	}
	return (0);
}
