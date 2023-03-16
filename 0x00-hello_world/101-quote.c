#include <stdio.h>
#include <unistd.h>

/**
* main - Entry point
* Return: Return 1 (Not success)
*/
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, text, 59);
	return (1);
}
