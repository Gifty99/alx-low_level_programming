#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of
 * 612852475143
 *
 * Return: 0
 */

int main(void)
{
	int p;

	long int num = 612852475143;


	for (p = sqrt(num); p > 2; p++)
	{
		if (num % p == 0)
		{
			printf("%d\n", p);
			break;
		}
	}


	return (0);
}
