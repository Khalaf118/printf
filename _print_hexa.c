#include "main.h"

/**
 * print_hexa_recursion - prints a num in hexadecimal recursively in lowercase
 * @num: number to print
 *
 * Return: number of digits printed
 */
int print_hexa_recursion(unsigned int num)
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
		_putchar(reminder - 10 + 'a');
	}

	return (count);
}

/**
 * print_hexa - prints a number in hexadecimal in lowercase
 * @list: va_list with the number to print from _printf
 * Return: number of digits printed
 * Desciption: uses print_hexa_recursion() to print the unsigned int
 */
int print_hexa(va_list list)
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
		count += print_hexa_recursion(num);
	}

	return (count);
}

