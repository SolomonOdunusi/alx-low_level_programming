#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (main_prime(n, n - 1));
}

/**
  * main_prime - calc if a num is a prime num
  * @n: number to be checked
  * @i: iterate number
  * Return: returns prime number to other function
  */
int main_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (main_prime(n, i - 1));
}

