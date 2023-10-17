#include "main.h"

/**
 * print_bin - prints a binary number from va_list
 * @args: argument list to be converted to unsigned int
 * Return: number of characters printed
 */

int print_bin(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i = 0, count = 0;
	char bin[33];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		bin[i] = (num % 2) + '0';
		num = num / 2;
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

