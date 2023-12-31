#include "main.h"

/**
 * helperFunction - return 0 or 1
 * @num: number being checked.
 * @i: possible factor of the number
 *
 * Return: 0 if not prime number, 1 if prime.
 */
int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - checks if number is a prime number or not
 * @n: number to be checked.
 *
 * Return: 1 if number is a prime.
 * 0 if number is not a prime number.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
