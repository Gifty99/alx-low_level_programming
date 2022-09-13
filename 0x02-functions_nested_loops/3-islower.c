#include "main.h"

/**
 * _islower - contains islower function
 *
 * Description: check for lowercase character
 *
 * Return: 1 if lowercase  or 0 if not
 *
 */

int _islower(int c)

{

	char alphabet;
	int lower;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == c)
			lower = 1;

		else
			lower = 0;

	}

	
	return (lower);

}
