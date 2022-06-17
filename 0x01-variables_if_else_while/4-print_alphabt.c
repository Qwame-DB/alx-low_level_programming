#include <stdio.h>
/**
 * main - entry point to the code
 *
 * Description: Prints the alphabets except e and q
 * Return: returns 0
 */
int main(void)
{
int a;
for (a = 'a'; a <= 'z'; a++)
{
if (a == 'e')
{
a++;
}
if (a == 'q')
{
a++;
}
putchar(a);
}
putchar ('\n');
return (0);
}
