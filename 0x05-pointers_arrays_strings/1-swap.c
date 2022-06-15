#include "main.h"
/**
 * swap_int - check the code
 *
 * @a,b: pointers to variables
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
