#include <stdio.h>
/**
  * main - Entry point
  * Description: Print the data type byte size
  * Return: always 0 (success)
*/
int main(void)
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of a short: %lu byte(s)\n", sizeof(short));
	printf("Size of a int: %lu byte(s)\n", (sizeof(int));
	printf("Size of a long : %lu byte(s)\n", sizeof(long));
	printf("Size of a long long: %lu byte(s)\n", sizeof(long long));
	printf("Size of float: %ld byte(S)\n", sizeof(float));
	printf("Size of double: %ld byte(s)\n", sizeof(double));
	printf("Size of long double: %ld byte(s)\n", sizeof(long double));
	return (0);
}
