#include "main.h"
/**
*print_last_digit - funstion that prints last digit
*
*@c: function parameter
*
*Return: k
*/

int print_last_digit(int c)
{
	int k;

	k = c % 10;
	if (c < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
