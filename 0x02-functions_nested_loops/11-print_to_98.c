#include <stdio.h>
/**
 * print_to_98 - takes one argument
 * Description: prints all natural numbers
 * between parameter and 98
 * Return: void
 */

/**
 * @n: integer argument
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("%d", 98);
}
