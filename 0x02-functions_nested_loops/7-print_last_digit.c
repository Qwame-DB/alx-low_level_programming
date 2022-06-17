#include "main.h"
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
 * print_last_digit - prints the last digit
 *
 * @x: integer variable
 * Return: always 0
 */
int print_last_digit(int x)
{
len = _strlen(x) - 1;
_putchar(len);
return (0);
}
