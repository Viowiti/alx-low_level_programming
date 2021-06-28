#include <unistd.h>
#include "holberton.h"
/**
 * swap_int - swaps the values of two pointers
 * @a: First int pointer
 * @b: Second int pointer
 * Return: No return value
 */

void swap_int(int *a, int *b)
{
	*a = (int) b;
	*b = (int) a;
}
