#include "main.h"
/**
 * islower - Shows 1 if c is lowercase
 * Another cases show 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character . 0 for the rest
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
