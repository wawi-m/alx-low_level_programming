#include <stdio.h>
#include "main.h"

/**
 * rev_string - returns string length
 *
 * @s: characters array
 * Return: void
 */
void rev_string(char *s)
{
	int n, i, a;
	char c;

	for (n = 0; s[n] != '\0'; n++)
	;
	i = 0;

	a = n / 2;

	while (a--)
	{
		c = s[n - i - 1];
		s[n - i - 1] = s[i];
		s[i] = c;
		i++;
	}
}
