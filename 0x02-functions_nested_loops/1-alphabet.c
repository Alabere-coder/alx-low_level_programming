#include "main.h"

/**
 * print_alphatbet - A function that prints alphabets
 * prints alphebets from a-z;
 * Return: Void
 */

void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}