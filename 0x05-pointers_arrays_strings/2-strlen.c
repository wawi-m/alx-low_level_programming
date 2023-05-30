#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns string length
 *
 * @s: string pointer
 * Return: string_length
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;

	return (n);
}
