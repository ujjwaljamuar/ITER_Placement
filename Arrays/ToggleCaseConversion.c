#include <stdio.h>

void main()
{
    char s[50];
    printf("Enter a string : \n");
    scanf("%s", s);

    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        else if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;

    printf("%s", s);
}