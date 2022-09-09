#include <stdio.h>
/**
 * main - takes no arguments
 * Description: prints alphabets except q and e
 * Return: 0 success program
 */
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		if (a != 101 && a != 113)
			putchar(a);
	}
	putchar('\n');
	return (0);
}
