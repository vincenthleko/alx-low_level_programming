#include <stdio.h>
/**
 * main - A program that prints a line in lowercase alphabetes
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
