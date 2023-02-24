#include "main.h"
/**
 *times_table - function that prints the 9 times table
 *
 *Return: returns nothing
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0 ; a <= 9 ; a++)
	{
		_putchar('0');

	for (b = 1 ; b <= 9; b++)
	{
		_putchar(',');
		_putchar(' ');
	c = b * a;
	if (c <= 9)
		_putchar(' ');
	else
		_putchar(c / 10 + ('0'));
	_putchar(c % 10 + ('0'));
	}
	_putchar('\n');
	}
}
