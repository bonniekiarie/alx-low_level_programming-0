#include <stdio.h>
/**
 * main - takes no arguments
 * Description: prints hex numbers
 * Return: 0 success program
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
		putchar(a);
	for (a = 97; a < 103; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
