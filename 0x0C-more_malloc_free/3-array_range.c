#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of intergers
 * @min: minimum range of value of value stored
 * @max: maximum range of values stored an number of elements
 *
 * Return: pointers to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
