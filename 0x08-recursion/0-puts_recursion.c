#include <unistd.h>
#include "holberton.h"
/**
 *  _puts_recursion - a function that prints a string, followed by a new line
 * @s: Pointer to a string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	_putchar(s);
	_putchar('\n');
}
