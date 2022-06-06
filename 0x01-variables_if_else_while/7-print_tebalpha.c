#include <stdio.h>
/**
 * main - entry point of all my code
 *
 * Description: printing alphabets in reverse
 * Return: always returns 0
 */
int main(void)
{
int z;
for (z = 'z'; z > 'a'; z--)
{
putchar (z);
}
putchar ('\n');
return (0);
}
