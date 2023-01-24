#include "main.h"
/**
 * handle_specifier - check if character is a valid specifier and assign
 * function
 * @format: character
 * Return: pointer to function
 */

int (*handle_specifier(const char *format))(va_list)
{
	int i = 0;
	func_s handler[3] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent}
	};

	for (i = 0; i < 3 ; i++)
	{
		if (*format == *(handler[i].sp))
		{
			return (handler[i].f);
		}

	}
	return (NULL);
}
