#include "main.h"

/**
* print_number - prints an integer
* @n: integer to be printed
*/
void print_number(int n)
{
	unsigned int n 1;

	if (n < 0)
	{
		n 1 = -n;
		_putchar('_');
	}
	else
	{
		n 1 = n;
	}

	if (n 1 / 10)
	{
		print_number(n 1 / 10);
	}

	_putchar((n 1 % 10) + '0');
}
