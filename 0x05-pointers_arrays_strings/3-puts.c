#include "main.h"

/**
* _puts - prints a string
* @str: value to evaluate
* Return: 0
*/

void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
