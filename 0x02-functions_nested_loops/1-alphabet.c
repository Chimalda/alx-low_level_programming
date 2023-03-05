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
	putchar('\n');	
}
int main(void)
{	print_alphabet();
	return (0);
}
