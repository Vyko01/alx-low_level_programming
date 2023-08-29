#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of byte.
 * @s: The string to be searched.
 * @accept: The set of byte to be seached for.
 *
 * Return: if a set is unmatched - a pointer to be mached bytes.
 * if no set is matched - ULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
