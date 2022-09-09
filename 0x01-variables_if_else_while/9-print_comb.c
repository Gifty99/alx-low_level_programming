#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 *
 * Description: Print all possible combinations of single-digit numbers
 *
 * Numbers must be separated by commas and a space
 *
 * You can only use `putchar` to print to console
 *
 * You can only use `putchar` up to four times
 *
 * You are not allowed to use any variable of type `char`
 *
 * Return: 0
 *
 */

int main(void)

{

	int num;


	for (num = '0'; num <= '9'; num++)

	{
		putchar(num);

		if (num != '9')

		{
			putchar(',');

			putchar(' ');
		}

	}

	putchar('\n');


	return (0);

}
