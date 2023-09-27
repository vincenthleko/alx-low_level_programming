#include "main.h"

/**
 * _strlen_recursion - returns a length of string
 * @s: the string to be measured
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	int lonit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
