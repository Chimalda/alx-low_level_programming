#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer input
 * Return: the length of a string
*/
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
