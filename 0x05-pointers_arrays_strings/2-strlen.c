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
	#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
		count++;
	return (count);
}
