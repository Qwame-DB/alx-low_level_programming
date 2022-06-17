#include "main.h"
/**
 * jack_bauer - prints the hours and seconds
 *
 * Return: void
 */
void jack_bauer(void)
{
int hour, sec;
for (hour = 00; hour < 24; hour++)
{
for (sec = 00; sec <= 60; sec++)
{
_putchar(sec);
if (sec > 59)
{
break;
}
}
_putchar(hour);
}
}
