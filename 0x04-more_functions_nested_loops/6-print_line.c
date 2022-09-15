#include "main.h"

/**
 * print_line - a function that draws a straight line in terminal
 * followed by a new line.
 * @n: An input integer
 * Return: Always 0
 */

void print_line(int n)
{

	int m;


	for (m = 0; m < n; m++)

		_putchar('_');

	_putchar('\n');

}
