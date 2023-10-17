#include "main.h"

/**
 * print_octal_recursion - prints the octal representation of a number
 * @number: number to be printed form va_list
 * Return: number of digits printed
 */

int print_octal_recursion(unsigned int number)
{
	int counter = 0, reminder;

	if (number == 0)
		return (0);

	counter += 1 + print_octal_recursion(number / 8);

	reminder = number % 8;
	_putchar(reminder + '0');

	return (counter);
}

/**
 * print_octal - prints the octal representation of a number
 * @list: number to be printed form va_list to use it in i_printf
 * Return: number of digits printed
 */

int print_octal(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += print_octal_recursion(n);
	}

	return (count);
}

