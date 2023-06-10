#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int number, withsymbol, sum = 0;

	for (number = 1; number < argc; number++)
	{
		for (withsymbol = 0; argv[number][withsymbol]; withsymbol++)
		{
			if (argv[number][withsymbol] < '0' || argv[number][withsymbol] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[number]);
	}

	printf("%d\n", sum);

	return (0);
}
