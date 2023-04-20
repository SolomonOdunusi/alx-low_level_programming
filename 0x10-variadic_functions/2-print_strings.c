#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints out strings
 * @separator: is the string to be printed between the strings
 * @n: number of strings
 * Return: return (0) and if one of the string is NULL, print (nil)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
