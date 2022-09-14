/*
 * File: 8-24_hours.c
 * Auth: lennox
 */

#include "main.h"

/**
 * times-table - Prints multiples up to nine
 *
 *
 */
void print_times_table(int n)
{
	int num, mult, prod;
	if (n < 0 || n > 15)
	{
		return;
	}
	else
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= n)
					_putchar(' ');
				else
					_putchar((prod / 10) + '0');

				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
