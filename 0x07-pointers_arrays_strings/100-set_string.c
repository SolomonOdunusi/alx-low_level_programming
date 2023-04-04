#include <stdio.h>

/**
  * set_string - sets the value of a pointer to a char
  * @s: pointer to pointer of a string
  * @to: pointer to var
  * Return: returns a function that sets the value of a pointer to a char
  */

void set_string(char **s, char *to)
{
	*s = to;
}
