#include <stdio.h>

/**
 * main - prints the alphabet in reverse.
 *
 * Description - prints alphabets backward
 *
 * Return: 0 on success
 */

int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}

