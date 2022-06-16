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
 * puts_half - prints half of the characters
 *
 * @str: pointer to a string
 * Return: void
 */
void puts_half(char *str)
{
int loop, len;

len = _strlen(str);
if (len % 2 != 0)
{
len = len - 1;
}
for (loop = len / 2; loop <  len; loop++)
{
putchar(str[loop]);
}
putchar('\n');
}
