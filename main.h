#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct func - Struct for specifier
 * @sp: format specifier
 * @f: the relevant function
 */
typedef struct func
{
	char *sp;
	int (*f)(va_list);
} func_s;

int _printf(const char *format, ...);
int (*handle_specifier(const char *format))(va_list);
int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);

#endif
