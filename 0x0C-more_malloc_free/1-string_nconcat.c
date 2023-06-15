#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"main.h"

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1_len = strlen(s1), s2_len = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	n = (n >= s2_len) ? s2_len : n;

	concat = malloc(sizeof(char) * (n + s1_len + 1));

	if (concat == NULL)
		return (NULL);
	strcpy(concat, s1);
	strncat(concat, s2, n);
	return (concat);
}

