#include <stdio.h>
#include <string.h>
void main()
{
    printf("Enter a string : \n");
    char str[20] = "Ujjwal";
    char rs[20] = "";

    int i = strlen(str) - 1;
    int j;

    for (j = 0; i >= 0; j++, i--)
        rs[j] = str[i];

    rs[j] = '\0';
    printf("Reversed string = %s \n", rs);
}