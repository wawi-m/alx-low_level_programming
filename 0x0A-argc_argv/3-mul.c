#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0 Always (success)
 */
int main(int argc, char *argv[])
{
	int i, j, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	prod = i * j;

	printf("%d\n", prod);

	return (0);
}
