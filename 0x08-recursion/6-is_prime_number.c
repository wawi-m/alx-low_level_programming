#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - detects a prime number
 *
 * @n: input integer
 * Return: 1 Always (success), else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if ((n % 2) != 0)
		return (1);
	return (n * is_prime_number(n - 1));

}
