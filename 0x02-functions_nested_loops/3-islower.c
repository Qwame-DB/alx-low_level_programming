#include "main.h"
/**
 * _islower - check the code
 * @c: variable that stores the character to be inputed
 * Description: checks for lowercase letters
 * Return: return 1 if c is lowercase
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
