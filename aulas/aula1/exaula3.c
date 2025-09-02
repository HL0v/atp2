#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char vowels[] = "aeiou";
    char str[100];

    printf("type a string : \n");
    fgets(str, sizeof(str), stdin);
    int cont = 0;
    for(int i = 0; i < strlen(str); i++){
        
        str[i] = tolower(str[i]);
        for(int j = 0; j < strlen(vowels); j++){
            if(str[i] == vowels[j]){
                cont++;
                
            }
        }
    }
    printf("Total vowels found: %d\n", cont);
}