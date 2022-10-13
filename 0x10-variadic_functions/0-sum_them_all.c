#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 * @...: other arguments
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list allp;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(allp, n);

	for (i = 0; i < n; i++)
		sum += va_arg(allp, int);

	va_end(allp);

	return (sum);
}
