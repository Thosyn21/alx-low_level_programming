#include "main.h"

/**
*_strlen - Calculates the length of a string
* @s: An input
* Return: 0
*/

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
