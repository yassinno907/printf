#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - function like printf
 * @format: string containing special caract
 * Return: sum succes
*/
int _printf(const char *format, ...)
{
	va_list my_char;
	int i = 0;
	int sum = 0;

	if (format == NULL)
		return (-1);
	va_start(my_char, format);
	while (format[i])
	{
		sum += 1;
		if (format[i] == '%')
		{
			++i;
			if (format[i] == 'c')
				_putchar((char)va_arg(my_char, int));
			if (format[i] == 's')
				print_string(va_arg(my_char, char *));
			if (format[i] == '%')
				_putchar('%');
			if (format[i] == 'd' || format[i] == 'i')
				print_number(va_arg(my_char, int));
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(my_char);
	return (sum);
}
