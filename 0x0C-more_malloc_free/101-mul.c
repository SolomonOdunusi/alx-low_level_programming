#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		_puts("Error");
		return (98);
	}
	_mul(argv[1], argv[2]);
	return (0);
}

/**
 * _strlen - Returns the length of a string
 * @s: String
 * Return: Length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * _puts - Prints a string to stdout
 * @s: String
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		putchar(s[i++]);
	}
	putchar('\n');
}

/**
 * _isdigit - Checks if a string is composed only of digits
 * @s: String
 * Return: 1 if s is composed only of digits, 0 otherwise
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * _mul - Multiplies two numbers and prints the result to stdout
 * @num1: First number
 * @num2: Second number
 */
void _mul(char *num1, char *num2)
{
	int len1 = _strlen(num1), len2 = _strlen(num2), i, j;
	int *res = (int *)malloc((len1 + len2) * sizeof(int));

	for (i = 0; i < len1 + len2; i++)
	{
		res[i] = 0;
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			res[i + j] += res[i + j + 1] / 10;
			res[i + j + 1] %= 10;
		}
	}

	for (i = res[0] == 0 ? 1 : 0; i < len1 + len2; i++)
	{
		putchar(res[i] + '0');
	}
	putchar('\n');
}
