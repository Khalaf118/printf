#include "main.h"

/**
 * print_str - prints a string function called from func ptr
 * @list: list of arguments bcs of va_arg()
 * Return: number of characters printed
 */

int print_str(va_list list)
{
	char *str;
	int i = 0;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

