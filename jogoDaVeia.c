#include <stdio.h>

void printMatriz(char matriz[][4]){

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

void verificacao(int jogador, char matriz[][4]){

    int nlinha, ncoluna;

        scanf("%d",&nlinha);
        scanf("%d",&ncoluna);

    while(matriz[nlinha][ncoluna] == '-'){ ///////////////////////////
        
        
        if(jogador == 1)
            jogar(nlinha, ncoluna, matriz, 'X');
        
        if(jogador == 2)
            jogar(nlinha, ncoluna, matriz, 'O');

        printMatriz(matriz);
    }
}
/////////////////////////////////////////////////////////////////////////
void verificarGanhador(int ganhador, char matriz[][4]){

    int controle1 = 0;
    int controle2 = 0;
    int controle3 = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
         
         if(i >= 1){
            if(matriz[i][j] == 'X' || matriz[i][j] == 'O'){
                controle1++;
            }

            if( i == j){
                if(matriz[i][j] == 'X' || matriz[i][j] == 'O'){
                    controle2++;
                }
            }
         }   
        }
        
    }
}
/////////////////////////////////////////////////////////////////////////
void jogar(int nlinha, int ncoluna, char matriz[][4], char simbolo){
    matriz[nlinha][ncoluna] = simbolo;
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

            verificarGanhador(ganhador, joguinho);

            verificacao(1, joguinho);

            verificacao(2, joguinho);

        }
    }

    return 0;
}