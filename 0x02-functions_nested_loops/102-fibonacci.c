#include <stdio.h>
/**
 * main - takes no arguments
 * Description: prints first 100 fibonnacci numbers starting with 1, 2
 * Return: 0
 */
int main(void)
{
	long a, b, sum;
	int i;

	i = 0;
	a = 1;
	b = 2;
	while (i < 49)
	{
		sum = a + b;
		printf("%lu ,", sum);
		a = b;
		b = sum;
		i++;
	}
	printf("%lu\n", sum);
	return (0);
}
