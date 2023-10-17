#include "main.h"

/**
 * print_HEXA_recursion - prints a num in hexa recusive in uppercase
 * @num: number to print
 * Return: number of digits printed
 * Desciption: uses print_hexa_RECURSION() to print the unsigned int
 */
int print_HEXA_recursion(unsigned int num)
{
	int count = 0, reminder;

	if (num == 0)
	{
		return (0);
	}

	count += 1 + print_hexa_recursion(num / 16);

	reminder = num % 16;

	if (reminder < 10)
	{
		_putchar(reminder + '0');
	}
	else
	{
		_putchar(reminder - 10 + 'A');
	}

	return (count);
}

/**
 * print_HEXA - prints a number in hexadecimal in uppercase
 * @list: va_list with the number to print from _printf
 * Return: number of digits printed
 * Desciption: uses print_hexa_recursion() to print the unsigned int
 */
int print_HEXA(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += print_HEXA_recursion(num);
	}

	return (count);
}


