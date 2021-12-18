#include <stdio.h>
#include <string.h>

void main(){
    char s1[50] = "hello";
    char s2[50] = "India";

    int i = strlen(s1);
    int j;
    for(j = 0;s2[j] != '\0';j++,i++)
        s1[i] = s2[j];
    
    s1[i] = '\0';
    printf("%s",s1);

}