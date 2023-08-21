#include "main.h"
#include <stdio.h>
/**
 * print_number - function that print numbers
 * @n: the number
*/
void print_number(int n)
{
	unsigned int i = 0;

	i = n;
	if (n < 0)
	{
		myputchar('-');
		i = -i;
	}
	if ((i / 10))
	{
		print_number(i / 10);
	}
	myputchar((i % 10) + '0');
}
