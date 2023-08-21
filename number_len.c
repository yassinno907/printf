#include "main.h"
/**
 * number_len - function that calcu
 * len of the number
 * @i: the number
 * Return: the len
*/
int number_len(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
	{
		u = i * -1;
		d++;
	}
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
