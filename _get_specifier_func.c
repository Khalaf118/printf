#include "main.h"

/**
 * get_specifier_func - returns a pointer to a func
 * @Specifier: specifier char d or i or s or b and so on
 * Return: pointer to a function to print what the specifier asked for
 */

int (*get_specifier_func(char Specifier))(va_list ap)
{
	int i = 0;

	specifiers_t specifiers[] = {
		{'s', print_str},
		{'r', print_rev},
		{'d', print_int},
		{'i', print_int},
		{'b', print_bin},
		{'R', print_rot13},
		{'p', print_pointer},
		{'x', print_hexa},
		{'X', print_HEXA},
		{'u', print_unsigned},
		{'o', print_octal},
		{'\0', NULL}
	};
	while (i < 11)
	{
		if (specifiers[i].spec == Specifier)
			return (specifiers[i].func);
		i++;
	}

	return (NULL);

}

