/**
 * print_numbers - writes the numbers 0-9 in stdout
 *
 * Return: No return value
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
