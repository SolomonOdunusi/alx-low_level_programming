#include <stdio.h>

/**
  * _memcpy - copies n bytes from src to dest
  * @dest: memory area it is stored
  * @src: memory area it is copied from
  * @n: the copies made
  * Return: returns a pointer to the destination
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (0);
}
