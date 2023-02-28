#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: character input
 * Return: Always 1 (Success), else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);

	return (0);
}
