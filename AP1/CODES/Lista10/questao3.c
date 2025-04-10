/*Escreva um programa que leia uma matriz 3x3 em que cada linha da matriz leia e armazena um nome.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("\nMatriz e nomes\n");

    char matriz[3][100];
    int i;

    printf("\nInsira tres nomes: ");
    for(i = 0; i < 3; i++){
        gets(matriz[i]);
    }

    for(i = 0; i < 3; i++){
        printf("\nNome %d: %s\n", i, matriz[i]);
    }

    return 0;
}