#include <stdio.h>
void copy(char src[],char dst[]){
    int i;
    for(i = 0;src[i] != '\0';i++)
        dst[i] = src[i];
    dst[i] = '\0';
}

void main(){
    char src[100],dst[100];
    printf("Enter a string : \n");
    scanf("%[^\n]",src);

    printf("src is %s \n",src);
    copy(src,dst);

    printf("dst is %s \n",dst);
}