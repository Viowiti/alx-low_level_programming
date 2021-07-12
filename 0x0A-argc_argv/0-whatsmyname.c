#include <stdio.h>
#include "holberton.h"

/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 *@argv : pointer to the array of arguments
 * Return: On success 0.
 * On error, 1 is returned, and errno is set appropriately.
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
