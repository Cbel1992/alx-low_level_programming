#include "main.h"

/**
 * _puts - function to print a string followed by a new line
 * by a new line, to stdout.
 * @str: input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
