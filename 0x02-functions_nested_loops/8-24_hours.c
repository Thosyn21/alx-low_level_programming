#include "main.h"

/**
 * jack_bauer - Task 8
 * Description - prints every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; H++);
	{
		for (M = 0; M < 60; M++);
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}
