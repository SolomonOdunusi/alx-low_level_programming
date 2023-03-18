#include <stdio.h>
/**
* main - Entry point
* Description: Print numbers 0-9
* Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
