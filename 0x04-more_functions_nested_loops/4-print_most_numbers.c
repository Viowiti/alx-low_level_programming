#inclde "holberton.h"

/**
 * print_most_numbers - print all numbers base 10
 *
 *Return: no return value
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
