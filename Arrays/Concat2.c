#include <stdio.h>
#include <string.h>

void main(){
    char s1[50] = "hello";
    char s2[50] = "India";
    char s3[50] = ""; 

    int i;
    int j;
    for(i = 0;s1[i] != '\0';i++)
        s3[i] = s1[i];
    for(j = 0;s2[j] != '\0';j++,i++)
        s3[i] = s2[j];
    
    s3[i] = '\0';
    printf("%s",s3);

}