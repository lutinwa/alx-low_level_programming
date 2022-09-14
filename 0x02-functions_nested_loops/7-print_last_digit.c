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
	_putchar(last_digit);
	return (last_digit);
}	

