#include "main.h"

/**
 * print_alphabet_x10 - Task 2
 * Description - prints 10 times the alphabets in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;

	for (c = 1; c <= 10; c++)
	{
		char d;

		for (d = 'a'; d <= 'z'; d++)
		{
		_putchar(c);
		}

	_putchar('\n');
	}
}
