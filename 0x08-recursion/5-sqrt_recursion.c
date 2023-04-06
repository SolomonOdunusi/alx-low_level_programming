#include "main.h"

/**
  * _sqrt_recursion -  natural square root of a number
  * @n: number
  * Return: returns the natural square root of a number.
  */

int _sqrt_recursion(int n)
{
	return (sqrt_recur(n, 1));
}

/**
  * sqrt_recur - helps the main function recursively calc sqrt
  * @n: number
  * @i: current guess
  * Return: the natural square root of `n`, else return -1
  */
int sqrt_recur(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n || n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recur(n, i + 1));
	}
}
