#include <stdio.h>
#include "main.h"

/**
 * print_array -  prints n elements of an array of integers
 *
 * @a: characters array
 * @n: number of array elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (i - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	putchar('\n');
}
