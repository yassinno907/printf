#include "main.h"
#include <stdio.h>

int  print_number(long int n)
{
	unsigned long int i = 0;
	int j = 0;

	i = n;
	if (n < 0)
	{
		j += 1;
		putchar('-');
		i = -i;
	}
	if (n == 0)
	{
		putchar('0');
	}
	
	if ((i / 10))
	{
		j += 1;
		print_number(i / 10);
	}
	putchar((i % 10) + '0');
	return (j);
}