#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format:  list of types of arguments
 * Return: returns  anything
*/
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	int i;
	char c, *s;
	float f;

	va_start(args, format);
	while (ptr && *ptr)
	{
		switch (*ptr)
		{
		case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%d", i);
			break;
		case 'f':
			f = (float) va_arg(args, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
			printf("(nil)");
			else
			printf("%s", s);
			break;
		}
		ptr++;

		if (*ptr != '\0' && (*ptr == 'c' || *ptr == 'i'
		|| *ptr == 'f' || *ptr == 's'))
		printf(", ");
	}
	printf("\n");
	va_end(args);
}
