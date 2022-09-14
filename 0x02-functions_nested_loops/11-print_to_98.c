#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - compute the print_to_98 function
 *
 * @n: int type integer
 *
 * Decription: Print all natural numbers
 * from n to 98, followed by a new line
 *
 * Return: 0
 *
 */

void print_to_98(int n)

{
	if (n <= 98)
	{

		for (; n <= 98; n++)
		{

			printf("%d", n);

			if (n == 98)
				continue;

				printf(", ");

		}

		printf("\n");
	}

	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;

			printf(", ");

		}

	printf("\n");

	}
}
