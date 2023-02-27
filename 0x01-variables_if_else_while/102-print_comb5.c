#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int x, y, z, n;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			for (z = 48; z <= 57; z++)
			{
				for (n = 48; n <= 57; n++)
				{
					if (((z + n) > (x + y) &&  z >= x) || x < z)
					{
						putchar(x);
						putchar(y);
						putchar(' ');
						putchar(z);
						putchar(n);

					if (x + y + z + n == 227 && n == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

