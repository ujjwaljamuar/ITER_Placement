/*
    Write a program which accept two string and return:
        -> 1 if s1 is lexicographically greater than s2
        -> -1 if s2 is lexicographically greater than s1
        -> 0 if they are lexicographically equal
*/
#include <stdio.h>
#include <string.h>
int compare(char s1[], char s2[])
{
    int i, diff = 0;
    if (strlen(s1) > strlen(s2))
        return 1;

    else if (strlen(s2) > strlen(s1))
        return -1;

    else
    {
        for (i = 0; i < strlen(s1); i++)
        {
            if (s1[i] != s2[i])
            {
                diff = s1[i] - s2[i];
                break;
            }
        }
    }

    if (diff > 0)
        return 1;
    if (diff < 0)
        return -1;

    return 0;
}

void main()
{
    char s1[100] = "MadaM";
    char s2[100] = "Madam";

    printf("%d", compare(s1, s2));
}