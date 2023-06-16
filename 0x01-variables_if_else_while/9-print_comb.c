#include <stdio.h>
/**
 * main - Entry point
 * description: 'prints all single digit numbers of base 10 starting from 0'
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
