#include "main.h"

/**
 * main - takes no arguments
 * Description: prints _putchar
 * Return: 0 on success of the program
 */
int main(void)
{
	char *str = "_putchar\n\0";
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	return (0);
}
