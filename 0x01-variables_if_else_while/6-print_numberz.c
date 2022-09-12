#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int number;

	for (number = 0 ; number < 10 ; number++)
	{
		putchar((number % 10) + '0');
	}
	putchar('\n');

	return (0);
}
