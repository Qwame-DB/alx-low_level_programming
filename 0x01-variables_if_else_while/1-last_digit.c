#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entry point for all my code
 *
 * Description: finding the value of the last digit of n
 * Return: returns 0
 */
int main(void)
{
int last_digit;
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
last_digit = n % 10;
if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
else if (last_digit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
else if (last_digit < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}
return (0);
}
