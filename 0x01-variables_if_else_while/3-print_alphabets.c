#include <stdio.h>

/**
 *main - prints out the alphabet in both cases
 *
 *Return: return 0 when completed successfully
 */

int main(void)
{
	int i;

	int j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
}
