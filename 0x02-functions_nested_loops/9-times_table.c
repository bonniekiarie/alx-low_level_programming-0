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
			if (mul >= 10)
			{
			_putchar('0' + mul / 10);
			}
			else if (mul < 10 && j == 0)
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
