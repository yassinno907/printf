#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that print evry character
 * @c: the character
 * Return: the char
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
