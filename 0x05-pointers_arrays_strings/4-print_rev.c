#include "main.h"
#include <stdio.h>
/**
 * _strlen - check the code
 *
 * @s: pointer to a string
 * Return: Always 0
 */
int _strlen(char *s)
{
int count;
int j = 0;
for (count = 0; *(s + count) != '\0'; count++)
{
j++;
}
return (j);
}

/**
 * print_rev - print reverse of a string
 *
 * @s: pointer to a variable
 * Return: void
 */
void print_rev(char *s)
{
int len, i;

len = _strlen(s);
for (i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}

