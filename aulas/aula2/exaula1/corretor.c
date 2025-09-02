#include <stdio.h>
#include <string.h>

struct acoes{
    char *ticker[7];
    char *name[50];
    char *trade[24];
    char *price[20];
    char *var[8];
}acao;

int main(){

    FILE *file = fopen("acoes.csv", "r+");
    if(!file){
        printf("file couldn't be open!\n");
    }else{
        
        char buffer[1024];
        int row = 0, column = 0;

        while(fgets(buffer,1024, file)){

            column = 0;
            row++;

            if(row == 2){
                continue;
            }else{row++;}

            char *value = strtok(buffer, " ,");
                while(value){
                    if(column == 3){
                        char num[1024] =  value;
                        printf("price : %s", value);
                    }
                    if(column == 5){
                        printf("var : %s", value);
                    }
                    printf("\n");
                    value = strtok(NULL, ",");
                    column++;
                }
            }
        fclose(file);
    }

    return 0;
}