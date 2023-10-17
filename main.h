#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct specifiers - struct for specifiers
 * @spec: specifier
 * @func: function pointer to choose specifier arg is va_list
 */
typedef struct specifiers
{
	char spec;
	int (*func)(va_list);
} specifiers_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list list);
int print_int(va_list list);
int print_bin(va_list list);
int (*get_specifier_func(char Specifier))(va_list);
#endif /* MAIN_H */

