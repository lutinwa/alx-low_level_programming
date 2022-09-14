/*
 * File: 11-print_to_98.c
 * Auth: Lennox
 */

#include "main.h"

/**
 * print-to-98 - should print all natural numbers, 98 should be the last number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
