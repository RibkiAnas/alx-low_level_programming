#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Return 0 (success)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf(" Fizz");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
			continue;
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz ");
			continue;
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
