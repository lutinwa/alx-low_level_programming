#include "main.h"
/* more headers goes there */
/**
 * main - Entry point
 * Description: 'print alphabet in lower case'
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

void print_alphabet(void)/*print alphabet*/
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
