#include "main.h"

/**
 * flip_bits - gets number of bits needed to flip
 * @n: How many bit flips are needed to equal m for n
 * @m: number to set equal
 *
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = 0, changes = 0;

	diff = n ^ m;

	while (diff)
	{
		if (diff & 1)
			changes++;
		diff = diff >> 1;
	}

	return (changes);
}
