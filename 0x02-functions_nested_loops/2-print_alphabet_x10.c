#include "main.h"
/**
 * print_alphabet - prints 10 times the alphabet, in lowercase
 * * Return : Always 0
 */
void print_alphabet(void)
{
	int x;
	int y;

	for (y = 1; x <= 10; x++)
	{
		for (y = 97; y <= 122; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
