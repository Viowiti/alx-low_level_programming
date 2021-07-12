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
	printf("%d\n", argc);
	return (0);
}
