#include <stdio.h>
#include "main.h"

/**
 * factorial - Returns factorial
 * @n: input integer
 *
 * Return: If n > 0 - n factorial, if n < 0 Always  - 1 (error)
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
