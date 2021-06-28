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
	
	for (i = '\0'; s[i] <= s.length() - 1; i--)
		putchar(s[i]);
	putchar('\n);
}
