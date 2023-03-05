#include <stdio.h>
/**
 *main- Entry Point
 *Return: Always 0
 */
void print_alphabet(void)
{
	char letters;
	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	
}
int main(void)
{
	print_letter();
	putchar('\n');
	return (0);
}
