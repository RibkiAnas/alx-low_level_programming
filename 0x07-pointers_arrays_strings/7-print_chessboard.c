#include "main.h"

/**
* print_chessboard - function that prints
* the chessboard.
* @a: input an array.
*/
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
