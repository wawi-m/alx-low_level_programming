#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints string
 *
 * @str: pointer string
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, n;

	for (i = 0; str[i] != 0; i++)
	{
	}
	j = i - 1;
	n = (j / 2) + 1;
	for (; n <= j; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
