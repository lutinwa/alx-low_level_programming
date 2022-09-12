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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
