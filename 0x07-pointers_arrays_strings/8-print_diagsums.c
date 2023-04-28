#include <stdio.h>
/**
  * print_diagsums - prints the sum of the two diagonals
  * @a: input
  * @size: input
  * Return: returns printed sum of two diagonals of matrix int
  */

void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		x += a[i * size + i];
		y += a[(i + 1) * size - (i + 1)];
	}
	printf("%d, %d\n", x, y);
}
