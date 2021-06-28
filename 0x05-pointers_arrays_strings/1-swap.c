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
	int c, h, temp;

	a = &c;
	b = &h;
	temp = *b;
	*b = *a;
	*a = temp;
}
	
