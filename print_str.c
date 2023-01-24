#include "main.h"

/**
 * str_len - get length of a string
 * @str: string
 *
 * Return: length of the string
 */

unsigned int str_len(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * print_str - prints a string
 * @args: argument
 *
 * Return: number of characters printed to stdout
 */

int print_str(va_list args)
{
	int length = 0;
	unsigned int len;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		length = write(1, "(null)", 6);
		return (length);
	}
	len = str_len(string);
	length += write(1, string, len);
	return (length);
}
