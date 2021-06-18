#include <stdio.h>

/**
 *main - prints the alphabet in reverse
 *
 *Return: 0 when successful
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
