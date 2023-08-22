#include <stdio.h>

/**
  * *_memset - fills the first n bytes pointed to by s with the constant byte b
  * @s: the memory area to be filled
  * @b: the constant byte or desired value
  * @n: the num bytes to fill
  * Return: returns a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n-- > 0; i++)
	{
		s[i] = b;
	}
	return (s);
}
