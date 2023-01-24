#include "main.h"
/**
 * print_char - prints a character to stdout
 * @c: character
 *
 * Return: number of characters printed to stdout
 */

int print_char(va_list args)
{
	char c = (char)va_arg(args, int);
	int count = 0;

	if (c)
	{
		count = (write(1, &c, 1));
		return (count);
	}

	return (0);
}
