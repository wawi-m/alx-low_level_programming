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
	int left = 0;
	int right = strlen(s) - 1;

	while (left < right)
	{
		if (s[left] != s[right])
		{
			return (0);
		}

	left++;
	right--;
	}

	return (1);
}
