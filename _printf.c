#include <unistd.h>
#include <stdarg.h>
#include "main.h"
#include <stdio.h>
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int tmp = 0;
	int count =  0;

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			tmp = write(1, (format + i), 1);
			count += tmp;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			printf("percent dey here\n");
			break;
		}
	}
	return (count);
}
