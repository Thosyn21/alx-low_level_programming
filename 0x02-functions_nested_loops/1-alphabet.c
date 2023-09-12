#include "main.h"

/**
 * main - void print_alphabet(void)
 * Description - print_alphabet(void)
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
