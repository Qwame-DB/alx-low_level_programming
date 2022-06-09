#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * Description: print the alphabets x10
 * Return: void type doesn't return any value
 */
void print_alphabet_x10(void)
{
int a;
int b;
for (a = '0'; a <= '9'; a++)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar (b);
}
_putchar('\n');
}
}
