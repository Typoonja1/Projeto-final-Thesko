#include <stdio.h>

void printMatriz(char matriz[][4]){

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){


            
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int jogo = 0, ganhador, veia = 1;
    char joguinho[4][4];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){

            if(i == 0){
                joguinho[i][j] = j + 1;
            }
            else if(j == 0){
                joguinho[i][j] = i + 1;
            }
            else if(i == 0 && j == 0){
                joguinho[i][j] = ' ';
                // continue;
            }
            else
            joguinho[i][j] = '-';
        }  
    }
    
    printMatriz(joguinho);
    

    // while(veia){

    //     while(jogo != 1){

    //     }
    // }

    return 0;
}