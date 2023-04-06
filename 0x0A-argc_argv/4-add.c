#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry
  * @argc: arg count
  * @argv: arg vector
  * Return: return 0
  */

int main(int argc, char *argv[])
{
	int add = 0;
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	
	for (i = 1; i < argc; i++)
	{
		int number = atoi(argv[i]);
		if (number == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		add += number;
	}
	printf("%d\n", add);
	return (0);
}

