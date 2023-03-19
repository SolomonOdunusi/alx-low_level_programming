#include <stdio.h>
/**
  * main - Entry point
  * Description: Print the data type byte size
  * Return: always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %ld byte(S)\n", sizeof(float));

	printf("\n");
	fprintf(stderr, ".");
	return (0);
}
