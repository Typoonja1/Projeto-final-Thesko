#include <stdio.h>

void printMatriz(char matriz[][4]){

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

void jogar(int nlinha, int ncoluna, char matriz[][4], char simbolo){
    matriz[nlinha][ncoluna] = simbolo;
}

void verificacao(int jogador, char matriz[][4]){

    int nlinha, ncoluna, loop = 1;;


    while(loop){ ///////////////////////////
        printf("Digite a linha e coluna respectivamente!\n");
        scanf("%d %d",&nlinha, &ncoluna);
        
        if(matriz[nlinha][ncoluna] == '-'){
            if(jogador == 1)
                jogar(nlinha, ncoluna, matriz, 'X');
            
            if(jogador == 2)
                jogar(nlinha, ncoluna, matriz, 'O');

            printMatriz(matriz);
            loop = 0;
        }
        else{
            printf("Posicao invalida!\n\n");
        }
    }
}
/////////////////////////////////////////////////////////////////////////
void verificarGanhador(int ganhador, char matriz[][4]){

    int linha1 = 0, linha2 = 0, diagonalP1 = 0, diagonalP2 = 0, diagonalS1 = 0, diagonalS2 = 0;

    for (int i = 1; i < 4; i++){
        for (int j = 1; j < 4; j++){
         
            if(matriz[i][j] == 'X'){
                linha1++;
            }

            if(matriz[i][j] == '0'){
                linha2++;
            }

            if( i == j){
                if(matriz[i][j] == 'X'){
                    diagonalP1++;
                }
            }

            if( i == j){
                if(matriz[i][j] == 'O'){
                    diagonalP2++;
                }
            }   
        }
    }

    if(linha1 == 3 || diagonalP1 == 3 || diagonalS1 == 3){
        ganhador = 1;
    }

    if(linha2 == 3 || diagonalP2 == 3 || diagonalS2 == 3){
        ganhador = 2;
    }
}
/////////////////////////////////////////////////////////////////////////

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

        while(ganhador == 0){

            verificacao(1, joguinho);

           verificarGanhador(ganhador, joguinho);

            verificacao(2, joguinho);

           verificarGanhador(ganhador, joguinho);
        }
    }

    return 0;
}