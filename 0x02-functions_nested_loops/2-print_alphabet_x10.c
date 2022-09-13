#include "main.h"

/**
 * print_alphabet_x10 - takes no arguments
 * Description: prints all lower case alphabets
 * 10 times
 * Return: 0 on success of the program
 */
void print_alphabet_x10(void)
{
	char n, x;

	for (x = 0; x < 10; x++)
	{
		for (n = 97; n < 123; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}
