#include "main.h"

/**
 * print_long_hexa_rec - prints a hexa number in lowercase
 * @num: number to be printed (unsigned long int)
 * Return: number of characters printed
 */

int print_long_hexa_rec(unsigned long int num)
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
 * print_pointer - prints a pointer addr
 * @list: list of arguments from _printf
 * Return: number of characters printed
 */
int print_pointer(va_list list)
{

	unsigned long int num;
	int counter;

	num = va_arg(list, unsigned long int);

	if (num == 0)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		return (5);
	}

	_putchar('0');
	_putchar('x');
	counter = print_long_hexa_rec(num) + 2;

	return (counter);
}

