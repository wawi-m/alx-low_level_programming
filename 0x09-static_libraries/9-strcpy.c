#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies src pointed string
 *
 * @dest: destination
 * @src: source
 * Return: pointed  dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}
	return (dest);
}
