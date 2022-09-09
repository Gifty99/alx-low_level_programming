#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 *
 * Description: Print the numbers of base 16 in lowercase
 *
 * Return: 0
 *
 */

int main(void)

{

	int h;

	char alphabet;


	for (h = '0'; h <= '9'; h++)

		putchar(h);

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)

		putchar(alphabet);

	putchar('\n');


	return (0);

}
