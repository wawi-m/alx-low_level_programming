#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char lower;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	putchar('\n');

	return (0);
}
