#include "main.h"

/**
 * _isalpha - Task 4
 * @c: An input character
 * Description - checks for alphabetical character
 * Return: 1 if c is a letter otherwise 0
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
		return (isletter);
}
