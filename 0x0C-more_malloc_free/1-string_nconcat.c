#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: srecond string
  * @n: number of bytes
  * Return: returns pointer and NULL if it fails
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1_len = 0, s2_len = 0, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
	{
		n = s2_len;
	}
	concat = malloc(sizeof(char) * (s1_len + n + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, s1);
	for (i = 0; i < n; i++)
	{
		concat[s1_len + i] = s2[i];
	}

	concat[s1_len + n] = '\0';
	return (concat);
}
