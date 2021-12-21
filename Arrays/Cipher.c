#include <stdio.h>
#include <string.h>
void caesar(char str[], int len, int k)
{
    int i;
    char ch;
    k = k % 26;

    for (i = 0; i < len; i++)
    {
        ch = str[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            ch += k;
            if (ch >= 'Z')
            {
                ch = ch % 90 + 65 - 1;
            }
        }
        str[i] = ch;
    }

    for (i = 0; i < len; i++)
    {
        ch = str[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch += k;
            if (ch >= 'z')
            {
                ch = ch % 122 + 97 - 1;
            }
        }
        str[i] = ch;
    }
}

void main()
{
    char str[100];

    printf("Enter the string : \n");
    scanf("%[^\n]", str);

    int len = strlen(str);

    printf("Enter no. of rotations : \n");
    int k;
    scanf("%d", &k);

    caesar(str, len, k);

    printf("%s", str);
}