#include "main.h"

/**
 * wildcmp - compares two strings, accounting for wildcard *
 * @s1: first string to compare
 * @s2: second string to compare, which may contain wildcard *
 * Return: 1 if strings can be considered identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');

	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
	return (0);
	}
}

