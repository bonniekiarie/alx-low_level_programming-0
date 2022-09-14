#include "main.h"

/**
 * print_times_table - takes no arguments
 * Description: prints n times table
 * Return: void
 */
/**
 * @n: integer argument
 */
void print_times_table(int n)
{
	int i, j, mul;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mul = i * j;
			if (mul >= 10)
			{
			_putchar('0' + mul / 10);
			}
			else if (mul < 10 && j != 0)
			{
			_putchar(' ');
			}
			_putchar('0' + mul % 10);
			if (j < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
			_putchar('\n');
	}
}
