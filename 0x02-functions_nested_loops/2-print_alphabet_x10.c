#include "holberton.h"
/**
 * print_alphabet_x10 - prints a-z ten times on a new line
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int i, j;

	j = 0;

	while (j < 9)
	{
		for (i = 97; i <= 122; i++)
			_putchar(i);
		_putchar('\n');
	}
	j++;
}
