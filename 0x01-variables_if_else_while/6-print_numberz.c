#include <stdio.h>

/**
 *main - prints numbers in a single line wit the putchar function.
 *
 *Return: 0 when successful
 */

int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
