#include "main.h"
/**
* rev_string - prints a reverse string
*@s: A pointer to an int that will be changed
*
*Return: void
*/

int main(void)
{
    char s[10] = "123456";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}


