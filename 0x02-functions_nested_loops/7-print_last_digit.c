#include "main.h"

/**
 * print_last_digit - compute the _print_last_digit
 *
 * @i: int type integer
 *
 * Decription: Print the last digit of a number
 *
 * Return: value of the last digit
 *
 */

int print_last_digit(int i)

{

	int n;

	if (i < 0)

		n = -1 * (i % 10);

	else
		n = i % 10;

	_putchar(n + '0');

	return (n);

}
