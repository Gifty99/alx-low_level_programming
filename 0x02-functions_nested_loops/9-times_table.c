#include "main.h"

/**
 * times_table - compute the times_table function
 *
 * Decription: Print the 9 times table, starting with 0
 *
 */

void times_table(void)

{

	int x; /* factor */

	int y; /* count  */

	int z; /* computed value */


	for (x = 0; x < 10; x++)
	{

		for (y = 0; y < 10; y++)
		{

			z = x * y;

			if (z > 9)
			{
				_putchar((z / 10) + '0');

				_putchar((z % 10) + '0');
			}

			else if (y != 0)
			{
				_putchar(' ');

				_putchar(z + '0');
			}

			else
			{
				_putchar(z + '0');

			}

			if (y != 9)
			{
				_putchar(',');

				_putchar(' ');
			}


		}

		_putchar('\n');

	}

}
