#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Description: 'print alphabet in lower case'
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

void print_alphabet_x10(void)/*print alphabet*/
{
	char letter;
	for (int i = 0 ; i < 10 ; i++)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			putchar(letter);
		}
		putchar('\n');
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}