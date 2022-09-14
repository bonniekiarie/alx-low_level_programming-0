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
	printf("%li, %li, ", a, b);
	while (i < 47)
	{
		sum = a + b;
		printf("%li, ", sum);
		a = b;
		b = sum;
		i++;
	}
	printf("%li\n", a + b);
	return (0);
}
