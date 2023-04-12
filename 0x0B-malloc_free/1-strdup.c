#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _strdup - a pointer to a newly allocated space
  * @str: string as a parameter
  * Return: returns a pointer with copy of string
  */

char *_strdup(char *str)
{
	char *dup;
	size_t len;
	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str) + 1;
	dup = malloc(len * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	memcpy(dup, str, len);
	return (dup);
}
