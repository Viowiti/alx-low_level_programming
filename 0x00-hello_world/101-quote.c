#include <stdio.h>
#include <unistd.h>

/**
 *main - the entrypoint
 *
 *Return: returns 1 upon successful compilation
 */

int main(void)
{
char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(2, str1, 59);
return (1);
}
