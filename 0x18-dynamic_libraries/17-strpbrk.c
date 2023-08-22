#include <stdio.h>
#include <string.h>

/**
  * _strpbrk - searches a string for any of a set of bytes.
  * @s: string
  * @accept: input
  * Return: always 0
  */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	for (; *s != '\0'; s++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*a == *s)
			{
				return (s);
			}
		}
	}
	return (NULL);
}
