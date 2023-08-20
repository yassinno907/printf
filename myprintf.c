#include <stdarg.h>
#include <stdio.h>
#include "main.h"



int _printf(const char *format, ...)
{
    va_list my_char;
    int i = 0;
    int sum = 0;

    if (!format  || !format[0])
    {
        return (-1);
    }


    va_start(my_char,format);
    while (format[i])
    {
        
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
                sum += putchar((char)va_arg(my_char, int));
            if (format[i] == 's')
                sum += print_string(va_arg(my_char, char *));
            if (format[i] == '%')
                sum += putchar('%');
            if (format[i] == 'd' || format[i] == 'i')
                sum += print_number(va_arg(my_char, int));
            else if (format[i] != 's' && format[i] != 'd' &&
            format[i] != 'i' && format[i] != '%' && format[i] != 'c')
            { 
                 sum += putchar(format[i - 1]);
                 sum += putchar(format[i]);
            }    
        }
        else
        {
            putchar(format[i]);
            sum += 1;
        }
        i++;
    }
    va_end(my_char);
    return (sum);
}
