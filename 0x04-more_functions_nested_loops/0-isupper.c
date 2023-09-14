#include "main.h"

/** 
 * _isupper - Task 0
 * Description - Checks for uppercase letters
 * @c: is an input character
 * Result: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
