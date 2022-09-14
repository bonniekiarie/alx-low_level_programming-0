#include <stdio.h>
/**
 * main - takes no arguments
 * Description: prints first 98 fibonnacci numbers starting with 1, 2
 * Return: 0
 */
int main(void)
{
	unsigned long a, b, sum;
	int i;

	i = 0;
	a = 1;
	b = 2;
	printf("%lu, %lu, ", a, b);
	while (i < 95)
	{
		sum = a + b;
		printf("%lu, ", sum);
		a = b;
		b = sum;
		i++;
	}
	printf("%lu\n", a + b);
	return (0);
}
