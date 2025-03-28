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

    //inserindo o primeiro barco na posição horizontal
    for(int i = 1; i <= 3; i++) {
        campo[1][i] = 3;
    }

    //inserindo o segundo barco na posição vertical
    for(int i = 2; i <= 4; i++) {
        campo[i][4] = 3;
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