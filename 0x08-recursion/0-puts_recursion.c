#include <unistd.h>
#include "holberton.h"
/**
 *  _puts_recursion - a function that prints a string, followed by a new line
 * @s: Pointer to a string
 *
 * Return: always 0
 * On error, 1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	unsigned in i;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
