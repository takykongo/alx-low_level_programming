#include "main.h"

/**
 * print_alphabet - find the alphabet letters in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
