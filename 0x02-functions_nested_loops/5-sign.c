#include <stdio.h>
#include "main.h"
/**
 * print_sign - check the code
 * @n: a variable
 *
 * Description: printing the sign of a number
 * Return: return 0, 1, or -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
