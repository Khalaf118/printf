#include "main.h"
/**
 * print_int - prints an integr
 * @list: va_list get it from _printf (valist)
 * Return: number of digits printed
 * Description: prints an int to stdout
 */
int print_int(va_list list)
{
	int num = va_arg(list, int);
	int num_len = 0, tmp = num, flag = 1, i = 0;/*flag to handle +ve -ve*/
	char *num_to_str;/* decalring vars num_len, tmp to save the value of num*/

	if (num == -2147483648)
	{
		num_to_str = "-2147483648";/*min int > max int by one prohibit overflow*/
		for (i = 0; i < 11; i++)
			_putchar(num_to_str[i]);
		return (11);
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0) /*dealing with -ve nums*/
	{
		_putchar('-');
		num *= -1;
		tmp *= -1;
		flag = -1;
	}
	while (tmp != 0) /*Getting the num_len*/
	{
		tmp /= 10;
		num_len++;
	}
	num_to_str = malloc(sizeof(char) * (num_len + 1));
	if (num_to_str == NULL)
		return (-1);
	for (i = num_len - 1; i >= 0; i--, num /= 10)/*filling the arr of the num */
		num_to_str[i] = (num % 10) + '0';
	for (i = 0; i < num_len; i++)/*printing the num*/
		_putchar(num_to_str[i]);
	num_to_str[num_len] = '\0';
	free(num_to_str);
	return (num_len + (flag == -1 ? 1 : 0));
}

