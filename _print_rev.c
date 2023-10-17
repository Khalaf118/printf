#include "main.h"

/**
 * print_rev - prints a string in revese
 * @list: argument list containing a string to be printed in rev order
 *
 * Return: number of characters printed
 */
int print_rev(va_list list)
{
	char *str;
	int i, len;

	str = va_arg(list, char *);

	if (str == NULL)
		str = ")llun(";

	for (len = 0; str[len]; len++)
		;

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	return (len);
}

