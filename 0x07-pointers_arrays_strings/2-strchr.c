#include "main.h"
#include <stddef.h>

/**
 * _strchr -  locates a character in a string.
 * @s: pointer with the location of the string
 * @c: character to find in the string
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
