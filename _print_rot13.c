#include "main.h"

/**
 * print_rot13 - prints a string in rot13
 * @list: list of arguments
 * Return: number of characters printed
 * Description: converts a string to rot13 if it is in the alphabet
 * if it num or genereic char, print as it is
 */

int print_rot13(va_list list)
{
	char *str, *s;
	int i = 0;

	str = va_arg(list, char*);

	if (str == NULL)
		str = "(ahyy)";

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(sizeof(char) * i + 1);
	if (s == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 77)
			s[i] = str[i] + 13;
		else if (str[i] >= 78 && str[i] <= 90)
			s[i] = str[i] - 13;
		else if (str[i] >= 97 && str[i] <= 109)
			s[i] = str[i] + 13;
		else if (str[i] >= 110 && str[i] <= 122)
			s[i] = str[i] - 13;
		else
			s[i] = str[i];
	}
	s[i] = '\0';

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	free(s);
	return (i);
}


