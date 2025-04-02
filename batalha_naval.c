#include <stdio.h>

int main() {

    //criando as linhas de A a J
    char linha[11] = {' ','A','B','C','D','E','F','G','H','I','J'};

    //criando a coluna de 1 a 10
    char* coluna [10] = {" 1", " 2", " 3", " 4", " 5", " 6", " 7", " 8", " 9", "10"};

    //criando a matriz campo 10x10
    int campo[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    //criando a matriz com formato de cone
    int cone[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i==2 && j >= 0 && j <= 4) {
                cone[i][j] = 1;
            } else if(i == 1 && j >= 1 && j <= 3) {
                cone[i][j] = 1;
            } else if(i == 0 && j == 2) {
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;              
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) { 
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //criando a matriz com formato de cruz
    int cruz[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i == 2) {
                cruz[i][j] = 1;
            } else if(j == 2) {
            cruz[i][j] = 1;
            } else {
            cruz[i][j] = 0; 
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) { 
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }    

    printf("\n");

    //criando a matriz com formato de octaedro
    int octaedro[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i == 0 && j == 2) {
                octaedro[i][j] = 1;
            } else if(i == 1 && j >= 1 && j <= 3) {
                octaedro[i][j] = 1;
            } else if(i == 2) {
                octaedro[i][j] = 1;
            } else if(i == 3 && j >= 1 && j <= 3) {
                octaedro[i][j] = 1;
            } else if(i == 4 && j == 2) {
                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;              
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) { 
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    //inserindo o primeiro barco na posição horizontal
    for(int i = 1; i <= 3; i++) {
        campo[1][i] = 3;
    }

    //inserindo o segundo barco na posição vertical
    for(int i = 2; i <= 4; i++) {
        campo[i][4] = 3;
    }

    //inserindo o terceiro barco na posição diagonal
    for(int i = 5; i <= 7; i++) {
        for(int j = 5; j <= 7; j++) {
            if(i = j) {
                campo[i][j] = 3;
            }
        }
    }

    //inserindo o quarto barco na posição diagonal
    for(int i = 8; i >= 6; i--) {
        campo[i][10 - i] = 3;
    }

    //exibindo o tabuleiro no terminal
    printf("   *** Tabuleiro Batalha Naval ***\n");
    printf("\n");

    for(int i = 0; i < 11; i++) {
        printf("  %c", linha[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++) {
        printf("%s ", coluna[i]);
        for(int j = 0; j < 10; j++) {
            printf("  %d", campo[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}