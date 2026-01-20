#include <stdio.h>

int main()
{
    char s[] = "How are you";
    int i, vcount = 0, ccount = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
            s[i] == 'O' || s[i] == 'U')
        {
            vcount++;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') ||
                 (s[i] >= 'A' && s[i] <= 'Z'))
        {
            ccount++;
        }
    }

    printf("Vowels = %d\n", vcount);
    printf("Consonants = %d\n", ccount);

    return 0;
}
