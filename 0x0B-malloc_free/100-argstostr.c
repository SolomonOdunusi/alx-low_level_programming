#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * argstostr - concat all arguments
  * @ac: argument count
  * @av: argument vector
  * Return: returns concatented args
  */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j;
	size_t len, k;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
				str[k++] = av[i][j];
			str[k++] = '\n';
		}
	}
	str[k] = '\0';
	return (str);
}
