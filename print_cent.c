#include "main.h"
/**
 * print_cent - prints a character to stdout
 * @c: character
 *
 * Return: number of characters printed to stdout
 */

int print_cent(va_list args)
{
	(void)args;

	write(1, "%", 1);

	return (1);
}
