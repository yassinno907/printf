#include "main.h"
/**
 * handle_string - function that print strings
 * @*str: the pointer of str
 * Return: i
*/
int handle_string(char *str)
{
int handle_string(char *str)
{
int i = 0;
if (str == NULL)
{
handle_string("(null)");
return;
}
while (str[i])
{
_putchar(str[i]);
i++;
}
return (i);
}
