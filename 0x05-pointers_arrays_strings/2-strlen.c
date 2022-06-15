#include "main.h"
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
