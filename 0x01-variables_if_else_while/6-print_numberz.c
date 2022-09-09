#include <stdio.h>

/**
 * main - main block
 *
 * Description: Print all digits of base 10 starting from 0
 *
 * Return: 0
 *
 */

int main(void)

{

	int i;

	i = '0';

	while (i <= '9')

	{

		putchar(i);

		i++;

	}

	putchar('\n');


	return (0);

}
