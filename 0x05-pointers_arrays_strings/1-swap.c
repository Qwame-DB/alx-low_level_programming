#include "main.h"
/**
 * swap_int - check the code
 *
 * @a: pointer to variable
 * @b: pointer to variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
int g, h;
g = *a;
h = *b;
*b = g;
*a = h;
}
