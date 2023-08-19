#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_string - function that print string
 * @s: string to be printed
*/
void print_string(char *s)
{
	int i;
	int len;

	len = strlen(s);
	i = 0;
	while (i < len)
	{
		_putchar(s[i]);
		i++;
	}
}
