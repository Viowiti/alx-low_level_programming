#include <stdio.h>
/**
 *main - print 1-9 with comma and spaces
 *
 *Return: 0 is successfuly compiled
 */
int main(void)
{
	int i;
	
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i <= 56)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
