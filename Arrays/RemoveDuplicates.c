#include <stdio.h>
#include <string.h>

void removeDup(char str[], int n)
{
    int i, j;
    int index = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (str[i] == str[j])
                break;
        }
        if (j == i)
            str[index++] = str[i];
    
    }
    str[index] = '\0';
}

void main(){
    char str[100];
    printf("Enter a string : \n");
    scanf("$]^\n]",str);

    int len = strlen(str);

    removeDup(str,len);

    printf("%s",str);
}