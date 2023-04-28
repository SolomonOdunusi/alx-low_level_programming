#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * argstostr - concat all arguments
  * @ac: argument count
  * @av: argument vector
  * Return: returns pointer to concatented args or NULL
  */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
				str[len] = av[i][j];
				len++;
		}
		str[len] = '\n';
		len++;
	}
	str[len] = '\0';
	return (str);
}
