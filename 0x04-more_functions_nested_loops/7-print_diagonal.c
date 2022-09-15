#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 * @n: number of times '\' is printed
 */

void print_diagonal(int n)
{

	int i = 0, j;


	while (n > 0)
	{

		for (j = i; j > 0; j--)
		
			_putchar(' ');

		_putchar('\\');

		_putchar('\n');

		c++;

		n--;
	}

	if (n <= 0)

		_putchar('\n');

}
