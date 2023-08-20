#include<stdio.h>
#include<unistd.h>
#include<stdarg.h>
/**
 * _printf - Printf function
 * @format: format.
 * Return: Counter.
 * */
/**
 * _putchar - print character
 * @c: char variable
 * Return: write(1, &c, 1)
 * */
/**
 * handle_string - function handling string
 * @*str: a poinnter of type char
 * Return: i
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int handle_string(char *str)
{
int i = 0;
if (str == NULL)
{
handle_string("(null)");
return;
}
while (str[i])
{
_putchar(str[i]);
i++;
}
return (i);
}
int _printf(const char *format, ...)
{
int counter = 0;
va_list args;
va_start(args, format);
if (!format || !format[0])
return (-1);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
char c = va_arg(args, int);
counter += _putchar(c);
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
counter += handle_string(str);
}
else if (*format == '%')
{
_putchar('%');
counter++;
if (*format)
{
_putchar(*format);
counter++;
}
}
format++;
}
else
{
_putchar(*format);
format++;
counter++;
}
}
return (counter);
}
