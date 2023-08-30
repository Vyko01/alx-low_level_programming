#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*)
	{
		_putchar(*s);
		s++;
		_puts_recursions(s);
	}
	else
		_putchar('\n');
}
