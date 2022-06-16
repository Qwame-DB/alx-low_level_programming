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
 * rev_string - reverses a string
 *
 * @s: pointer to a string
 * Return: void
 */
void rev_string(char *s)
{
int len, loop;
char swap;

len = _strlen(s) - 1;
for (loop = len / 2; loop >= 0; loop--)
{
swap = s[loop];
s[loop] = s[len - loop];
s[len - loop] = swap;
}
}
