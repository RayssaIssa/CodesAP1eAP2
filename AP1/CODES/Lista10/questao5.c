/*Escreva um programa que leia uma matriz 3x3 e imprima os valores de forma organizada.Exemplo:
[01] [02] [03] 
[04] [05] [06]
[07] [08] [09]*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("\nLeitura de matrizes\n");
    int matriz[3][3], i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nA matriz e: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}