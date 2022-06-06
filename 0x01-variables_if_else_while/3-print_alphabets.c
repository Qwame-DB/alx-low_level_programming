#include <stdio.h>
/**
 * main - entry point to all my code
 *
 * Description: printing lowercase and uppercase alphabets
 * Return: always returns 0
 */
int main(void)
{
char a;
char b;
for (a = 'a'; a <= 'z'; a++)
{
putchar (a);
}
for (b = 'A'; b <= 'Z'; b++)
{
putchar (b);
}
putchar('\n');
return (0);
}
