#include <stdio.h>
/**
 * main - entry point to the code
 *
 * Description: Base 16 numbers
 * Return: returns 0
 */
int main(void)
{
int a, b;
for (a = '0'; a <= '9'; a++)
{
putchar (a);
}
for (b = 'a';  b <= 'f'; b++)
{
putchar(b);
}
putchar ('\n');
return (0);
}
