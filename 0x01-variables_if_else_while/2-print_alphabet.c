#include <stdio.h>
/**
 * main - entry point to all my code
 *
 * Description: prints out the alphabets in lowercase
 * Return: returns 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
putchar('\n');
}
return (0);
}
