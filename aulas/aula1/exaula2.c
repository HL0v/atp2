#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    char str[100];
    printf("Digite uma string: \n");
    fgets(str, sizeof(str), stdin);

    char strInver[strlen(str) + 1];    
    
    for(int i = 0; i < strlen(str); i++){
        
        strInver[i] = str[strlen(str) - 1 - i];

    }
    printf("String invertida : %s \n", strInver);
}   