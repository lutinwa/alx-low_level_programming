/**
 * Description -  checks for uppercase character.
 *
 * Return: Always 0.
 */
#include <stdio.h>
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
}
