// Accept string , positions to be extracted and print the substring

#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    printf("Enter a string : \n");
    scanf("%[^\n]", s);

    int strt, noc, i;
    printf("Enter start position and no. of characters to be extrated : \n");
    scanf("%d %d", &strt, &noc);

    if (strt >= strlen(s) || noc > strlen(s))
        printf("Index Out of bound \n");

    else
        for (i = strt - 1; i <= noc; i++)
        {
            printf("%c", s[i]);
        }
}