#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: input integer
 * Return: Always 1 (Success), else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

		return (1);

	return (0);
}
