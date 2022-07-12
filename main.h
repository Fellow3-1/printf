#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_string(va_list s);
int print_int(va_list i);
int (*format_conversion(char s))(va_list);

/**
  * struct code_format - Struct format
  * @sc: The specifiers
  * @f: The function associated
  */

typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif
