#include <unistd.h>
#include "holberton.h"
/**
 * factorial - gets the factorial of  a number
 * @n: The number to work with
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
