#include "main.h"
/**
 * _isalpha - check the code
 * @c: variable
 *
 * Description: returns 1 if the c is an alphabet
 * Return: returns 1 if c is an alphabet
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
