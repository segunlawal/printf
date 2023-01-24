#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0, tmp = 0;
	va_list args;

	va_start(args, format);
	int (*f)(va_list);

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
			f = handle_specifier(&format[i + 1]);
			if (f != NULL)
			{
				tmp = f(args);
				count += tmp;
				i += 2;
				continue;
			}
			if (format[i + 1] == '\0')
			{
				break;
			}
			if (format[i + 1] != '\0')
			{
				tmp = write(1, (format + i), 1);
				count += tmp;
				i++;
				continue;
			}
		}
	}
	return (count);
}
