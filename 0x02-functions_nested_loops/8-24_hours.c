#include "main.h"
/* more headers goes there */
/**
 * main - Entry point
 * Description: 'print alphabet in lower case'
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
