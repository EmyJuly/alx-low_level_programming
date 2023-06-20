#include "main.h"
/**
 * description: "prints 10 times the alphabet,in lowercase"
 * prints the letters 'a' to 'z' on a new line.
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
