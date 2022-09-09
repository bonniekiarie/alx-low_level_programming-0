#include <stdio.h>
/**
 * main - takes no arguments
 * Description: prints unique numbers 0 -100
 * separated by commas
 * Return: 0 success program
 */
int main(void)
{
	int a, b;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			if (a != b && ((a * 10 + b) < (b * 10 + a)))
			{
				putchar(a);
				putchar(b);
				if (a < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
