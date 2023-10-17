#include "main.h"

/**
 * _printf - my own printf like function.
 * @format: string to be printed + format specifiers.
 * Return: number of characters printed on screen.
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int counter = 0;
	int (*specifer)(va_list);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ptr, format);

	while (*format != '\0')
	{
		if (*format != '%')
			counter += _putchar(*format);
		else
		{
			format++;
			if (*format == '%')
				counter += _putchar('%');
			else if (*format == 'c')
				counter += _putchar(va_arg(ptr, int));
			else
			{
				specifer = get_specifier_func(*format);
				if (specifer != NULL)
					counter += specifer(ptr);
				else
				{
					counter += _putchar('%');
					counter += _putchar(*format);
				}
			}
		}
		format++;
	}

	va_end(ptr);
	return (counter);
}

