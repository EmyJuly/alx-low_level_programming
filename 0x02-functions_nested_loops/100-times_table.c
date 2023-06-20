#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: the number for which the times table should be printed
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j != 0)
				printf(", ");

			if (result < 10)
				printf("  ");
			else if (result < 100)
				printf(" ");
			printf("%d", result);
		}
		printf("\n");
	}
}
