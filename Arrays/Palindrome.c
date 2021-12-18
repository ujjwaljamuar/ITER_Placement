#include <stdio.h>
#include <string.h>
int Palindrome(char s[])
{
    int i = strlen(s) - 1;
    int j;

    for (j = 0; j < i; j++, i--)
        if (s[j] != s[i])
            return 0;

    return 1;
}
void main()
{
    printf("Enter a string : \n");
    char str[20] = "madam";

    printf("%d", Palindrome(str));
}