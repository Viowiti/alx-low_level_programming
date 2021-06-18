#include <stdio.h>

/**
 *main - print in lowercase all hexadecimal characters
 *
 *Return: return 0 when successful
 */

int main(void)
{
	int j;
	int i;

	i = 48;
	j = 97;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
