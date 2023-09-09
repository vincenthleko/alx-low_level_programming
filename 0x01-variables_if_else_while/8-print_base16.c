#include <stdio.h>
/**
 * main - print hexadecimal numbers
 * Return: 0 (Success)
 */
int main(void)
{
	char numbers = '0';
	char letters = 'a';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
