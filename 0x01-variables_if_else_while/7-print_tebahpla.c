#include <stdio.h>
/**
 * main- Entry Point
 * Return: Always 0
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
