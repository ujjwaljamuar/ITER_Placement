#include <stdio.h>
#include <string.h>
void encrypt(char s[]){
    int i;
    for(i = 0;s[i] != '\0';i++)
        s[i] += 5;
    
}
void decrypt(char s[]){
    int i;
    for(i = 0;s[i] != '\0';i++)
        s[i] -= 5;
    
}

void main(){
    char str[20] = "UjjwalJamuar";

    printf("Original - %s \n",str);
    encrypt(str);
    printf("Encrypted - %s \n",str);
    decrypt(str);
    printf("Decrypted - %s \n",str);
}