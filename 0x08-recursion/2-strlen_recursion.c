#include <unistd.h>
#include "holberton.h"
/**
 *  _strlen_recursion - writes the length of a string
 * @s: string parameter
 *
 * Return: On success 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (0);
	}
	else
		return (1 +  _strlen_recursion(s + 1));
}
