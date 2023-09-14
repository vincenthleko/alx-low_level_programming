#include "main.h"

/**
 * _isupper - prints uppercase letters
 * @c: char to heck
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >='A && c <= 'z')
		return(1);
	else
		return(0);
}
