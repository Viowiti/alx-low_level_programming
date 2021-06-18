#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - checks if the last number's relation to 5, 6 and 0
 *
 *Return: 0 if compiled successfully.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastNum = n % 10;

	if (lastNum > 5)
		printf("The last digit of %d is %d and is greater than 5\n", n, lastNum);
	if (lastNum == 0)
		printf("The last digit of %d is %d  and is zero\n", n, lastNum);
	if (lastNum < 6 && lastNum != 0)
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	return (0);
}
