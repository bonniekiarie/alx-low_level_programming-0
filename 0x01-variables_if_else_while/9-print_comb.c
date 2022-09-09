#include <stdio.h>
/**
 * main - takes no arguments
 * Description: prints numbers 0 -10
 * separated by commas
 * Return: 0 success program
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
