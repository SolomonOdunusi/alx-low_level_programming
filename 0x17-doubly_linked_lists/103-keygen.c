#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 * Return: return 0 on success else 1 on error
 */
int main(int argc, char *argv[])
{
	char key[7];
	int i, len, tmp1, tmp2;

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}

	len = strlen(argv[1]);
	key[0] = argv[1][0];
	tmp1 = argv[1][0];
	for (i = 1; i < len; i++)
	{
		tmp2 = argv[1][i];
		key[i] = (tmp1 ^ tmp2);
		tmp1 = tmp2;
	}
	key[i] = '\0';
	printf("%s\n", key);
	return (0);
}
