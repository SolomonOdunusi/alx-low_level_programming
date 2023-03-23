#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* positive_or_negative - assign a random num to the var n each time
* @i : integer
* Return: Always 0 (success)
*/

int positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n");
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
