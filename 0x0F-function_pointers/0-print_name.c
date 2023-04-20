#include <stdio.h>

/**
 * print_name -prints the name with function ptr
 * @name: name in main func
 * @f: ptr function
 * Return: returns 0 (success)
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
	return (0);
}
