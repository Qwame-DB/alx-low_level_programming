#include "main.h"
/**
 * _abs - function for the absolute integer
 *
 * @x: integer variable
 * Return: the value of x
 */
int _abs(int x)
{
if (x < 0)
{
x = x * -1;
}
else
{
x = x * 1;
}
return (x);
}
