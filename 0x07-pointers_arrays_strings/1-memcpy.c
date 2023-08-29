#include "main.h"

 /**
  * _memcpy - function that copies memory area
  * @dest: memory where is stored
  * @src: bytes from memory area is copied
  * @n: number of bytes
  *
  * Return: copied memory with byte changed
  */

char *_memcpy(char *dest, char *src, unsigned int n
		)

{
	int i = 0;
	int r = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
