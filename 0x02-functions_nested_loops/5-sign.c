#include "main.h"
/* more headers goes there */
/**
 * main - Entry point
 * Description: 'print alphabet in lower case'
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

