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
		{'\0', NULL}
	};
	while (i < 4)
	{

		if (specifiers[i].spec == Specifier)
			return (specifiers[i].func);
		i++;
	}

	return (NULL);

}

