#include "main.h"

/**
 * print_unsigned - prints an unsigned int
 * @args: argument list to be converted to unsigned int
 * Return: number of characters printed
 */

int print_unsigned(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int i = 0, count = 0;
	char bin[11];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		bin[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}

	bin[i] = '\0';
	count = i;

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(bin[i]);
	}

	return (count);

}

