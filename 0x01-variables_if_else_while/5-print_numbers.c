#include <stdio.h>
/**
 * main - takes no arguments
 * Description: prints numbers 0 -10
 * Return: 0 success program
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
