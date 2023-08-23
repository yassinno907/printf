#include "main.h"
#include <stdio.h>
/**
 * print_number - function that print numbers
 * @n: the number
 * Return: len of the number
*/
int  print_number(int n)
{
	unsigned int i = 0;
	int j = 0;

	if (n < 0)
	{
		j += 1;
		myputchar('-');
		n = -n;
	}
	i = n;
	if (i == 0)
		j = 1;
	while (i != 0)
	{
		i /= 10;
		j++;
	}
	if ((n / 10))
	{
		print_number(n / 10);
	}
	myputchar((n % 10) + '0');
	return (j);
}
