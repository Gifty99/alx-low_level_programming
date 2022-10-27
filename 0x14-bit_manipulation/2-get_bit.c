#include "main.h"

/**
 * get_bit - A function that gets a bit at index
 * @n: The number to get bit from
 * @index: The index where the bit get at
 * Return: The value of the bit or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max;

	if (n == 0 && index < 64)
		return (0);

	for (max = 0; max <= 63; n >>= 1, max++)
	{
		if (index == max)
			return (n & 1);
	}

	return (-1);
}
