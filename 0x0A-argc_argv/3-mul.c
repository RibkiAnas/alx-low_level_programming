#include <stdlib.h>
#include <stdio.h>

/**
* main - program that multiplies two numbers.
* @argc: The size of the argv array.
* @argv: An array of size argc.
*
* Return: Return 0 (Success).
*/
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;
	printf("%d\n", product);

	return (EXIT_SUCCESS);
}
