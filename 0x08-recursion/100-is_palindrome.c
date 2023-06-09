#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * is_palindrome - Returns if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int is_palindrome(char *s)
{
	char *r;

	strcpy(s, r);
	char *strrev(char *s);

	if (*s == '\0')
		return (1);
	else if (*s != '\0')
	{
		if (strcmp(s, r) == 0)
			return (1);
	}
	else
		return (0);

	return  (is_palindrome(s));
}
