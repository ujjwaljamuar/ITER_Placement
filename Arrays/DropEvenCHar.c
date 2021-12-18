// Drop even position from a string.

#include <stdio.h>
void main()
{
    char s[100] = "Ujjwal";
    char m[100];

    int i, j;

    for (i = 0, j = 0; s[i]; i += 2, j++)
        m[j] = s[i];

    m[j] = '\0';

    printf("%s", m);
}