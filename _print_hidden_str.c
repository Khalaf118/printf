#include "main.h"

/**
 * print_hidden_str - prints a string, replacing hidden chars like \n\t
 * @list: list of arguments to be convertoed to a str
 * Return: number of characters printed
 */
int print_hidden_str(va_list list)
{
	char *str;
	int i = 0, counter = 0;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 0 && str[i] <= 15)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			counter += 3;
			counter += print_HEXA_recursion((unsigned int)(str[i]));
		}
		else if ((str[i] >= 16 && str[i] < 32) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			counter += 2;
			counter += print_HEXA_recursion((unsigned int)(str[i]));
		}
		else
		{
			_putchar(str[i]);
			counter++;
		}
	}
	return (counter);
}


