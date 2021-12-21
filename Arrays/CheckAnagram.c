#include <stdio.h>
#include <string.h>

void main()
{
    char s1[] = "Ujjwal";
    char s2[] = "ujjwal";

    int m = strlen(s1);
    int n = strlen(s2);
    int i, j = 0;
    if (m == n)
    {
        for (i = 0; i < n; i++)
        {
            j = j ^ s1[i] ^ s2[i];
        }
        if (j == 0)
        {
            printf("Anagram");
        }
    }
    else{
        printf("Not anagram");
    }

    
}