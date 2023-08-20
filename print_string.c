#include "main.h"
#include <stdio.h>
#include <string.h>

int print_string(char *s)
{
    int i;
    int len;
    if (s == NULL)
    {
        print_string("(null)");
        return (strlen("(null)"));
    }
    
    len = strlen(s);
    i = 0;
    while (i < len)
    {
        myputchar(s[i]);
        i++;
    }
    i++;
    return (i);
}
