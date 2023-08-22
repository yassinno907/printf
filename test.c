#include "main.h"
#include <stdio.h>
#include <limits.h>


int main(void)
{
    int len;
    int len2;
    char name[] = "ilias";
    int s;

    long int l;
    
    l = INT_MIN;
    l = l - 1024;


    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);

    _printf("hello guys this a amazing day so lets call %s for playing %d vs 3\n", "ilias", 3);
    printf("hello guys this a amazing day so lets call %s for playing %d vs 3\n", "ilias", 3);
    
    s = 28;
    _printf("my name and age is %s%d\n", name,s);
    printf("my name and age is %s%d\n", name,s);

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

 
    /*len = _printf("%s\n", "ilias");
    len2 = printf("%s\n", "ilias");*/

   
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    
    
    len = _printf("tatatatata %s nothing\n", (char *)0);
   

    _printf("%d\n", len);

    _printf("si %s si %s la ra%chbet \n","", ", simo",'\n');
    printf("si %s si %s la ra%chbet \n","", ", simo",'\n');
    

    _printf("%K\n");
    _printf("%c\n", '\0');
    _printf("%d\n", INT_MAX);
    printf("%d\n", INT_MAX);

    _printf("%d\n", INT_MIN);
    printf("%d\n", INT_MIN);

    len = _printf("%i - %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    len2 = printf("%i - %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

    printf("%d\n", len);
    printf("%d\n", len2);
    
    _printf("%i\n", l);

    _printf("iddi%diddididii\n", 1024);
    printf("iddi%diddididii\n", 1024);

    _printf("xxxx %% ksksk\n");
    printf("xxxx %% skmsk\n");
    
    _printf("ilias %sss\n", (char *)0);
    printf("ilias %sss\n", (char *)0);

    len = _printf("%c\n", '\0');
    len2 = printf("%c\n", '\0');

    _printf("%d\n", len);
    printf("%d\n", len2);

    
    _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", John", '\n');
    printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", John", '\n');


    len = _printf("%    ");
    len2 = printf("%    ");
    
    _printf("%d\n", len);
    _printf("%d\n", len2);/*

    len =_printf("Complete the sentence: You %s nothing. John Snow.\n", (char *)0);
    len2 = printf("Complete the sentence: You %s nothing. John Snow.\n", (char *)0);

    printf("%d\n", len);
    printf("%d\n", len2)*/

    

    return (0);
    
}