#include <unistd.h>
#include "holberton.h"
/**
 * _strlen - checks the length of a string
 * @s: character pointer
 *
 * Return: length of a string
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
	char str;

	int len;

	*s = str;
	len = _strlen(str);
	len = len + 1;

	return (len);
}
