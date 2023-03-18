#include <stdio.h>
/**
* main - Entry point
* Description: Print all digit combination
* Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
