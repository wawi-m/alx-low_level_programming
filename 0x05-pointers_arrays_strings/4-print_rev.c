#include <stdio.h>
#include "main.h"

/**
* print_rev - prints string
*
* @s: character string pointer
* Return: void
*/
void print_rev(char *s)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	n = i - 1;
	for (; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
