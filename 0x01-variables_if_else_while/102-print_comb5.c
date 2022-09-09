#include <stdio.h>
/**
 * main - takes no arguments
 * Description: prints unique numbers 0 -100
 * separated by commas
 * Return: 0 success program
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				for (d= 48; d < 58; d++)
				{
					if ((a * 10 + b) < (c * 10 + d))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if (!(a == '9' && b == '8' && c == '9' && d == '9'))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
