#include "main.h"

/**
 * print_sign - runs print_sign function
 *
 * @n: type int integer, positive or positive
 *
 * Description - Print the sign of a number
 *
 * print +, 0, or - depending on number, along with return
 *
 * Return: 1 if +ve, 0 if 0 and -1 if -ve
 *
 */

int print_sign(int n)

{

	if (n > 0)
	{

		_putchar('+');

		return (1);

	}

	else if (n = 0)
	{

		_putchar('0');

		return (0);

	}

	else
	{

		_putchar('-');

		return (-1);

	}

}
