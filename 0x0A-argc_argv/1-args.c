#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments passed
 *@argv: array of arguments passed
 * Return: On success 0.
 * On error, 1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%d\n", argc - 1);
		(void)argv;
	}
	return (0);
}
