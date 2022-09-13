#include "main.h"

/**
 * times_table - takes no arguments
 * Description: prints 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j, mul;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = i * j;
			_putchar('0' + mul / 10);
			_putchar('0' + mul % 10);
			_putchar(',');
			_putchar(' ');
		}
			_putchar('\n');
	}
}
