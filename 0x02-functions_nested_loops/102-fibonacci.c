#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int x;
	unsigned long y1 = 0, y2 = 1, sum;

	for (x = 0; x < 50; x++)
	{
		sum = y1 + y2;
		printf("%lu", sum);

		y1 = y2;
		y2 = sum;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
