#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: swap int a
 * @b: swap int b
 * Return: void
 */
void swap_int(int *a, int *b) 
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
