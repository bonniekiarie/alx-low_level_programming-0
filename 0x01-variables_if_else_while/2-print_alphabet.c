#include <stdio.h>
/**
 * main - takes no arguments
 * Description: prints alphabets
 * Return: 0 success program
 */
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
