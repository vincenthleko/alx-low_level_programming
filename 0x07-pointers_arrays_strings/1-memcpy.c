#include "main.h"

/**
 * _memcpy - function copies @n byte from memory area @src to memory area @dest
 * @n: function copies
 * @src: byte from memory area
 * @dest: to memory area
 * Return: a pointer to @dest
 */

char *_memcpy(char *src, char *dest, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
