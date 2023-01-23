#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

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
int (*handle_specifier(char*))(va_list);

#endif
