#include <stdio.h>

/**
 * main - Entry piont
 * Return: Always 0
 */

int main(void)
{
	int f = 1;

	while (f < 100)
	{
		if (f % 3 == 0 && f % 5 == 0)
			printf("FizzBuzz ");

		else if (f % 3 == 0)
			printf("Fizz ");

		else if (f % 5 == 0)
			printf("Buzz ");

		else
			printf("%d ", f);

		f++;
	}

	printf("Buzz\n");

	return (0);
}
