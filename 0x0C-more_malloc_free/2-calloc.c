#include <stdlib.h>
#include <string.h>

/**
  * _calloc - allocates memory for an array, using malloc.
  * @nmemb: element
  * @size: bytes
  * Return: returns pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
