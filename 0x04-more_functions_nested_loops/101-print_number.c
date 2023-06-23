#include "main.h"

/**
 * print_integer - print
 * @n: integer
 * Return: always
 */
void print_integer(int n)
{

	unsigned int num = n;

	if (n < 0)
	{
		_putchar('_');
		num = num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
