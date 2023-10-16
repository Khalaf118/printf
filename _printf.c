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

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ptr, format);
	while (*format != '\0')
	{
		if (*format != '%')
			counter += _putchar(*format);
		else
		{
			switch (*++format)
			{
				case 'c':
					counter += _putchar(va_arg(ptr, int));
					break;
				case '%':
					counter += _putchar('%');
					break;
				case 's':
					counter += print_str(va_arg(ptr, char *));
					break;
				case 'd': case 'i':
					counter += print_int(va_arg(ptr, int));
					break;
				case 'b':
					counter += print_bin(va_arg(ptr, unsigned int));
					break;
				default:
					_putchar('%');
					_putchar(*format);
					counter += 2;
			}
		}
		format++;
	}
	va_end(ptr);
	return (counter);
}


