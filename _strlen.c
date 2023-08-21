#include <stdio.h>
#include "main.h"
/**
 * _strlen - function that return
 * the len of string
 * @s: the string
 * Return: the lenght of string
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len += 1;
	}
	return (len);
}
