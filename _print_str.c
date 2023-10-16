#include "main.h"

/**
 * print_str - prints a string from a va_list to use _printf
 * @str: string to be printed from valist
 *
 * Return: number of characters printed to add to count in _printf
 */
int print_str(char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		return (0);

	while (str[i] != '\0')
		_putchar(str[i++]);

	return (i);

}

