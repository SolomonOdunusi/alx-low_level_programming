#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: array
 * Return: returns 0
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}

