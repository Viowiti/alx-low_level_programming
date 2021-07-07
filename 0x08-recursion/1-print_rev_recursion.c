#include <unistd.h>
#include "holberton.h"
/**
 * _print_rev_recursion - writes a string in reverse
 * @s: the pointer to the string
 *
 * Return: no return value
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s)
{
	
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
