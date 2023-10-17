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

/*main function to print + _putchar write(,,) + get_specifier_func*/
int _putchar(char c);
int (*get_specifier_func(char Specifier))(va_list);
int _printf(const char *format, ...);

/**string functions*/
int print_rev(va_list list);
int print_str(va_list list);
int print_rot13(va_list list);

/*number functions*/
int print_int(va_list list);
int print_bin(va_list list);
int print_hexa(va_list list);
int print_HEXA(va_list list);
int print_pointer(va_list list);

/*number helper functions*/
int print_hexa_recursion(unsigned int num);
int print_hexa_recursion(unsigned int num);
int print_long_hexa_rec(unsigned long  int num);


#endif /* MAIN_H */

