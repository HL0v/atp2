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

    FILE *file = fopen("acoes.csv", "r");
    if(!file){
        printf("file couldn't be open!\n");
    }else{
        
        char buffer[1024];
    
        int row = 0;
        int column = 0;

        while (fgets(buffer,1024, file)){
            column = 0;
            row++;
            if(row == 2)
                continue;
            char *string = strtok(buffer, " ,");
            
            while(string){ 
                if(column == 0){
                    printf("ticker : %s", string);
                }
                if(column == 1){
                    printf("name : %s", string);
                }
                if(column == 2){
                    printf("trade : %s", string+1);
                }
                if(column == 3){
                    printf("price : %s.%s", string,string+1);
                }
                if(column == 5){
                    printf("var : %s.%s", string,string+1);
                }
                printf("\n");
                string = strtok(NULL, ",");
                column++; 
            }
        }
        printf("éan n ta indo \n");
        fclose(file);
    }

    return 0;
}