#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_palindrome(s, 0, _strlen_recur(s)));
}

/**
 * _strlen_recur - returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen_recur(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recur(s + 1));
}

/**
 * check_palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_palindrome(s, i + 1, len - 1));
}
