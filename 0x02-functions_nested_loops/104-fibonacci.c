#include <stdio.h>
/**
 * main - Finds and prints the first 98 Fibonacci numbers.
 * The numbers are separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long y1 = 1, y2 = 2, next;
	printf("%lu, %lu, ", y1, y2);

	for (count = 3; count <= 98; count++)
	{
		next = y1 + y2;
		printf("%lu", next);
		if (count != 98)
			printf(", ");
		y1 = y2;
		y2 = next;
	}
	printf("\n");
	return (0);
}
