#include "main.h"

/**
 * print_sign - takes one argument
 * Description: prints the sign of a number
 * Return: 1 positive number, 0 zero, -1
 * negative number
 */

/**
 * @n:integer
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
