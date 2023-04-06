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

	int mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
