#include <stddef.h>

/**
 * _strchr - Entry points
 * @s: input
 * @c: innput
 * Return: always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

