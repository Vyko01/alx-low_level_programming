#include "main.h"
/**
 * print_triangel - prints a triangle, follwed by a new line
 * @size: size of the triangle
 */
void print_triangel(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
