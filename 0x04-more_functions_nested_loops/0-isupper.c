#include <unistd.h>
#include "holberton.h"
/**
 * _isupper - checks whether the value of c is an uppercase letter
 * @c: The character being tested
 *
 * Return: On success 0
 * On error, 1 is returned, and errno is set appropriately.
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
