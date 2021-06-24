#include "holberton.h>

/**
*_isdigit - checks if c is a decimal number
*@c: The character being checked
*Return: On success 1.
*On error, 0 is returned, and errno is set appropriately.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
