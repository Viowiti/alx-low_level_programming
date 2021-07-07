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
	unsigned int len = 0;

	if (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
