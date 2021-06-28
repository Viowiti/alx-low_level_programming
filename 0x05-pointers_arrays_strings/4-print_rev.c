#include <unistd.h>
#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string pointer
 *
 * Return: no return value
 */
void print_rev(char *s)
{
	int i;

	for (s[i] = '\0'; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
