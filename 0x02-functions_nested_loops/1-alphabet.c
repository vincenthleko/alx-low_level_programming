#include <stdio.h>
/**
 * main - a program that prints lowercase alphabets
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

		_putchar(alphabet);
	_putchar('\n');
}
