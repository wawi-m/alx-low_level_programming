#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes char c to stdout
 * @c: print char
 * Return: Always 1 (Success), Always -1 (Error), &  errno appropriately set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
