#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints elements of
 * an array of integers
 * numbers are displayed in same order as stored in array
 * @a: input array
 * @n: input integer
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}

	putchar('\n');
}
