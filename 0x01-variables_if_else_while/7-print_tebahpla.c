#include <stdio.h>
/**
 * main - takes no arguments
 * Description: prints alphabets in reverse
 * Return: 0 success program
 */
int main(void)
{
	int a;

	for (a = 122; a > 96; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
