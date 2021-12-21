#include <stdio.h>
#include <string.h>

int strengthcheck(char str[])
{
    int i, l, s = 0, uflag = 0, lflag = 0, dflag = 0, sflag = 0;
    l = strlen(str);
    if (l >= 8)
        s += 20;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90 && uflag == 0)
        {
            s += 20;
            uflag = 1;
        }

        else if (str[i] >= 97 && str[i] <= 122 && lflag == 0)
        {
            s += 20;
            lflag = 1;
        }
        else if (str[i] >= 48 && str[i] <= 57 && dflag == 0)
        {
            s += 20;
            dflag = 1;
        }

        else if (sflag == 0)
        {
            s += 20;
            sflag = 1;
        }
    }

    return s;
}
void main()
{
    printf("Enter a password : \n");
    char psw[20];
    scanf("%[^\n]", psw);

    printf("Your password strength is %d %%. \n", strengthcheck(psw));
}