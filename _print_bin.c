#include "main.h"

/**
 * print_bin - print binary representation of an unsigned int
 * @num: number to print in binary
 * Return: number of chars printed
 * Description: print binary of an unsigned int to the printf function using %b
 */

int print_bin(unsigned int num)
{
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


