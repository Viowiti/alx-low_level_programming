#include <stdio.h>

/**
 *main -print the lowercase alphabet except e and q
 *
 *Return: 0 if successful
 */

int main(void)
{
	int i;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
