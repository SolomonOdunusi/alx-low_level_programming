#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
        int i, wc;
        char **w, *p;

        if (str == NULL || str[0] == '\0')
                return (NULL);

        wc = 0;
        for (i = 0; str[i]; i++)
                if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
                        wc++;

        w = malloc(sizeof(char *) * (wc + 1));
        if (w == NULL)
                return (NULL);

        wc = 0;
        for (p = strtok(str, " "); p; p = strtok(NULL, " "))
                w[wc++] = strdup(p);

        w[wc] = NULL;

        return (w);
}
