#include <stdio.h>
/**
 * main - takes no arguments
 * Description: prints sum of even terms of fibonacci series
 * Return: 0
 */
int main(void)
{
	long a, b, sum;
	int i;

	i = 0;
	a = 1;
	b = 2;
	sum = 0;
	while (i <= 4000000)
	{
		i = a + b;
		if (i % 2 == 0)
			sum += i;
		a = b;
		b = i;
	}
	printf("%li\n", sum);
	return (0);
}
