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
	s = "";
	int j = 0;
	while (s[j] != '\0')
		j++;
	return (j - 1);
}
