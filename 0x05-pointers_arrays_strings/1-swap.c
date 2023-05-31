#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps two integer values
 *
 * @a: integer1
 * @b: integer2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
