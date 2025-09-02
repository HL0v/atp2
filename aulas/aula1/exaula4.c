#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    char str[100];
    printf("Digite uma string: \n");
    fgets(str, sizeof(str), stdin);

    char strInver[strlen(str) + 1];    
    
    for(int i = 0; i < strlen(str); i++){
        str[i] = tolower(str[i]);
        strInver[i] = str[strlen(str) - 1 - i];
    }
    

    printf("normal %s\n", str);
    printf("invertida %s\n", strInver);

    int res = strcmp(str, strInver);
    if(res == 0){
        printf("é palíndromo \n");
    }else if (res == 1) {
        printf("não é palíndromo \n");
    }
}   