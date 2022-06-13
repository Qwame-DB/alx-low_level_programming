#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * positive_or_negative - entry point into my code
 *
 *@n: variable for a nuo
mber
 * Description: finds the sign of the value of n
 * Return: returns 0
 */
int positive_or_negative(int n)
{
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
