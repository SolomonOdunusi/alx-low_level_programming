#include <stdio.h>
#include <string.h>

char *_strpbrk(char *s, char *accept)
{
	char *a;
	
	for (; *s != '\0'; s++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*a == *s)
			{
				return s;
			}
		}
	}
	return NULL;
	
}
