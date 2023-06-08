#include <stdio.h>
#include "main.h"

/**
 *_strlen_recursion - returns string length
 *@s: input string
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		return (_strlen_recursion(&s[i]) + 1);
	}
	else
	{
		return (0);
	}
}
