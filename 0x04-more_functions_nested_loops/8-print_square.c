#include "main.h"

/**
 * print_square - a function that prints a square
 * followed my new line
 * @size: an input integer (size of the square)
 */

void print_square(int size)
{
	int i = 0, j;


	if (size > 0)
	{
		while (i < size)
		{
			for (j = 0; j < size; j++)

				_putchar('#');

			_putchar('\n');
			i++;
		}
	}

	else
		_putchar('\n');

}
