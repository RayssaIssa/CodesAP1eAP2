/*Escreva um programa que leia uma matriz 4x4 e imprima o maior elemento da matriz.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("\nO maior numero\n");
    int matriz[4][4], i, j;
    printf("\nInsira os valores da matriz: ");

    for(i = 0; i < 4; i++){
        for(j =0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    int maior = matriz[0][0];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(maior < matriz[i][j]){
                maior = matriz[i][j];
            }
        }
    }
    printf("\nO maior numero da matriz e [%d]\n\n", maior);

    return 0;
}