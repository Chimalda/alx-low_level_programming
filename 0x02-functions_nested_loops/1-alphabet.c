#include "main.h"
/**
 * print_alphabet- check description
 *main- Entry Point
 *Return: Always 0
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);
	_putchar('\n');
}
