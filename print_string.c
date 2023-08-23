#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_string - function that print
 * string of character
 * @s: string to print
 * Return: the len of the string
*/
int print_string(char *s)
{
	int i;
	int len;

	if (s == NULL)
	{
		print_string("(null)");
		return (_strlen("(null)"));
	}
	len = _strlen(s);
	i = 0;
	while (i < len)
	{
		myputchar(s[i]);
		i++;
	}
	return (len);
}
