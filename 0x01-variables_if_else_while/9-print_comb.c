#include <stdio.h>
/**
 * main - print numbers seperated by commas and space
 * Return: 0 (Success)
 */
int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		putcaher(numbers);
		if (numbers != '9')
		{
			putchar(',');
			putchar(' ');
		}
		numbers++;
	}
	putchar('\n');
	return (0);
}
