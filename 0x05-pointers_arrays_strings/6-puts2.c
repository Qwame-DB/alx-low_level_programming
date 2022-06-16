#include "main.h"
#include <stdio.h>
/**
 * _strlen - prints the length of a string
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
 * puts2 - prints every other character of a string
 *
 * @str: pointer to a string
 * Return: void
 */
void puts2(char *str)
{
int i, len;

len = _strlen(str);
for (i = 0; i <= len; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
