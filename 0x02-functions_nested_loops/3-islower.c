#include "main.h"

/**
 * _islower - Task 3
 * Description - checks for lowercase letters
 * @c: an input character
 * Return: 1 if c is lowercase
 * Return: 0 otherwise
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
	
		if (i ==c)

	lower = 1;
	}
	return (lower);
}
