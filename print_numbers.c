#include "main.h"
#include <stdio.h>
/**
 * print_number - function that putchar number
 * @n: number to be printed
*/
void print_number(int n)
{
	int i = 0;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
