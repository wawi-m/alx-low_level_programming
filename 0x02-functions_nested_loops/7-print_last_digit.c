#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints number last digit
 *
 * @n: input integer
 * Return: int
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
