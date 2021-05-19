#include <stdio.h>

void printMatriz(char matriz[][4]){

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

void verificacao(int jogador){

}

void verificarGanhador(int ganhador, char matriz[][4]){

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            
        }
        
    }
}

void jogar(nlinha, ncoluna, jogador){

}

int main(){

    int ganhador = 0, jogo = 1;
    char joguinho[4][4];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){

            if(i == 0){
                joguinho[i][j] = j + 1;
            }
            else if(j == 0){
                joguinho[i][j] = i + 1;
            }
            else
            joguinho[i][j] = '-';
            
            if(i == 0 && j == 0)
                joguinho[i][j] = ' ';
        }  
    }
    
    printMatriz(joguinho);
    

    while(jogo){

        while(ganhador != 1){

            verificarGanhador(ganhador);

            verificacao(1);

            verificacao(2);

        }
    }

    return 0;
}