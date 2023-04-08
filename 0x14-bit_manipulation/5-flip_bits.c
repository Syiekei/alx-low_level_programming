#include "main.h"

/**
 * flip_bits - change to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, result;
	unsigned int j, i;

	j = 0;
	result = 1;
	difference = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (difference & result))
			j++;
		result <<= 1;
	}

	return (j);
}
