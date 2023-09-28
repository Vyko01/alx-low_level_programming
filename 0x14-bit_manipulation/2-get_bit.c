#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal numbers
 * @n: number to search
 * @i: index of the bits
 *
 * Return: value of the bits.
 */
int get_bit(unsigned long int n, unsigned int i)
{
	int bit_val;

	if (i > 63)
		return (-1);

	bit_val = (n >> i) & 1;

	return (bit_val);
}
