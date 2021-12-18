#include <stdio.h>

int inString(char s[],char c){
    int i,count = 0;
    for(i = 0;s[i]!= '\0';i++)
        if(s[i] == c)
            ++count;
            printf("%d ",i+1);

    printf("\n");
    return count;
}

void main(){
    char s[20],ch;
    printf("Enter a string and a character : \n");

    scanf("%s %c",s,&ch);

    int occ;
    occ = inString(s,ch);

    printf("%c is present in %s, %d times.",ch,s,occ);

}

/* ''' scanf("%s",s);                or scanf("%s %c");
    fflush(stdin);           
    scanf("%c",&ch); ''' */ 