#include "main.h"

/**
 * print_alphabet - Task 1
 * Description - prints alphabets in lowercase
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
