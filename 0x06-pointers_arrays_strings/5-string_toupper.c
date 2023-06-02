#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - capitalize a string
 *
 * @s: lower string
 * Return: upper string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 122 && s[i] >= 97)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
