#include <stdio.h>
#include <string.h>

/**
  * _strspn - gets the lenght of a prefix substring
  * @s: pointer to a string
  * @accept: pointer to string with char to match
  * Return: returns num of bytes in s from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	char *p;

	for (i = 0; s[i]; i++)
	{
		for (p = accept; *p; p++)
		{
			if (*p == s[i])
				break;
		}
		if (!*p)
			break;
	}
	return (i);
}

