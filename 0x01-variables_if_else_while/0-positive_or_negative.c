#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - this function takes  a number and checks whether it is positive
 *
 *Return: returns 0 upon successful running
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d\n - is a positive");
	if (n == 0)
		printf("%d\n - is zero");
	if (n < 0)
		printf("%d\n - is negative");
	return (0);
}
