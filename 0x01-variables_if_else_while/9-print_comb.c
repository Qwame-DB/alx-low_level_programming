#include <stdio.h>
/**
 * main - entry point for the code
 *
 * Description: combination of single digit numbers
 * Return: return 0
 */
int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
putchar (a);
putchar (',');
putchar (' ');
}
putchar ('\n');
return (0);
}
