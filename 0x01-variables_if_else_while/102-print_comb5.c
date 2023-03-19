#include <stdio.h>
/**
* main - Entry point
* Description: Print all digit combination
* Return: Always 0 (success)
*/

int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{
			for (k = i; k <= 9; k++)
			{
				l = j;
				if (k == i)
				{
					l++;
				}
				for (; l <= 9; l++)
				{
					
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
				if (i != 9 || j != 8 || k != 9 || l != 9)
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
