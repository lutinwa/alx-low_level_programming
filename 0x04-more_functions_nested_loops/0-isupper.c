/**
 * Description -  checks for uppercase character.
 *
 * Return: Always 0.
 */
#include "main.h"
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
