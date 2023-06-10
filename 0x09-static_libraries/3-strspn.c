#include "main.h"

/**
 * _strspn -  concatenates two strings.
 * @s: pointer with the location of the string
 * @accept: letters to accept and count
 * Return: Always
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, _accept = 0;
	char *p =  s, *a = accept;
	while (*s != '\0')
	{
		p++;
		_accept = count;
		while (*accept != '\0')
		{
			a++;
			if (*s == *accept)
			{
				count++;
			}
		}
		if (count == _accept)
		{
			return (count);
		}
	}
	return (count);

}
