#include "main.h"

/**
  * factorial - factorial of a num
  * @n: given number
  * Return: recursively returns the factorial of a given num
  */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
