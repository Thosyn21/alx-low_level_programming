#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char word[9] = "Main";
	int i;
			
	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
