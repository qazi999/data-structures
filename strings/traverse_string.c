#include <stdio.h>

int main()
{
    char s[] = "HELLO";
    int i;

    for (i = 0; s[i] != '\0'; i++)
        printf("%c", s[i]);

    return 0;
}
