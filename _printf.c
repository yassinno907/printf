#include<stdio.h>
#include<unistd.h>
#include<stdarg.h>
#include "main.h"
/**
 * _printf - function that print string
 * @format : the first parameter
 * Return: the len of the string
*/

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
}
else
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
