#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: integer array
 * @n:  number
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int first = 0, last, temp;

	last = n - 1;
	while (first < last)
	{
		temp = a[first];
		a[first] = a[last];
		a[last] = temp;
		first++;
		last--;
	}
}
