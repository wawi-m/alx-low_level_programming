#include <stdio.h>
#include "main.h"

/**
 *_strcmp -  compares two strings
 *
 * @s1: input string
 * @s2: input string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	j = s1[i] - s2[i];

	return (j);
}
