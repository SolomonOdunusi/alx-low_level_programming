#include <stdio.h>
#include <string.h>

/**
  * _strstr - locates a substring
  * @haystack: string
  * @needle: substring
  * Return: returns a pointer to the beginn of the substring or NULL
  */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;
		for (; *n == *h && *n != '\0'; h++)
		{
			n++;
		}
		if (*n == '\0')
		{
			return haystack;
		}
	}
	return NULL;
}
