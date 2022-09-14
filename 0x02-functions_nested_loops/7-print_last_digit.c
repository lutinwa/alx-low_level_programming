#include "main.h"
/* more headers goes there */
/**
 * main - Entry point
 * Description: 'print alphabet in lower case'
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int print_last_digit(int n)
{
	int last_digit;
	
	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	
	_putchar(last_digit + '0');
	return (last_digit);
}	

