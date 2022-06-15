#include "main.h"
#include <stdio.h>
/**
 * _puts - check the code
 *
 * @str: pointer to a string
 * Return: Void
 */
void _puts(char *str)
{
int count;
for (count = 0; *(str + count) != '\0'; count++)
{
putchar(*(str + count));
}
putchar('\n');
}
