#include "main.h"

/**
 * print_last_digit - Task 7
 * @r: An integer input
 * Description - prints the last digit of a number\
 * Return: Returns the last digit
 */
int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
