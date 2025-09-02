#include <string.h>
#include <stdio.h>
int main(){
    char str[100];
    printf("Digite uma string: \n");
    fgets(str, sizeof(str), stdin);

    
    printf("tamanho : %d \n", (int)strlen(str));
}   