#include <unistd.h>
/**
 * myputchar - function that write
 * one character
 * @c: the char
 * Return: 1 succes
*/
int  myputchar(char c)
{
	return (write(1, &c, 1));
}
