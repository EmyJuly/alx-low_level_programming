#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 * Return : Always 0
 */
void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
