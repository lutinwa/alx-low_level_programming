#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int longIntType;
	long long int longLongIntType;

	printf("Size of a char: %d byte(s)\n" sizeof(charType));
	printf("Size of an int: %d byte(s)\n" sizeof(intType));
	printf("Size of a long int: %d byte(s)\n" sizeof(longIntType));
	printf("Size of a long long int: %d byte(s)\n" sizeof(longLongIntType));
	printf("Size of a float: %d byte(s)\n" sizeof(charType));
	return (0);
}
