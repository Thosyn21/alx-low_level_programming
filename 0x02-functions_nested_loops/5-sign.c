#include "main.h"

/**
 * print_sign - Task 5
 * @n: N is an input number
 * Description - prints the sign of a number
 * Return: 1 if n is greater than 0, 0 if n is 0, -1 if n is less than 0
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-1');
	}

	return (value);
}
