#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: numbers of arguments
 * @argv: array of arguments
 * Return: Always 0 (Si=uccess)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
