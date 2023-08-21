#include "main.h"
#include <stdio.h>
/**
 * print_number - function that print numbers
 * @n: the number
 * Return: the size
*/
int  print_number(long int n)
{
	unsigned long int i = 0;
	int j = 0;

	i = n;
	if (n < 0)
	{
		j += 1;
		myputchar('-');
		i = -i;
	}
	if (n == 0)
	{
		myputchar('0');
	}
	if ((i / 10))
	{
		j += 1;
		print_number(i / 10);
	}
	myputchar((i % 10) + '0');
	return (j);
}
