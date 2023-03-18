#include <stdio.h>
/**
* main - Entry point
* Description: Print all digit combination
* Return: Always 0 (success)
*/

int main(void)
{
	int i, j, a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10;
		b = i % 10;
		for (j = i; j < 100; j++)
		{
			c = j / 10;
			d = j % 10;
			putchar('0' + a);
			putchar('0' + b);
			putchar(' ');
			putchar('0' + c);
			putchar('0' + d);
				if (i != 99 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
