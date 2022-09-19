#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: input string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int length, m, n;

	for (length = 0; str[length] != '\0'; length++)

	if (length % 2 == 0)

		m = length / 2;

	else
		m = (length + 1) / 2;

	for (n = m; n < length; n++)

		_putchar(str[n]);

	_putchar('\n');
}
