#include "main.h"

/**
 * print_alphabet - takes no arguments
 * Description: prints all lower case alphabets
 * Return: 0 on success of the program
 */
void print_alphabet(void)
{
	char n;

	for (n = 97; n < 123; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
