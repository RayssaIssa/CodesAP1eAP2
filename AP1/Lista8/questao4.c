/*Escreva um programa em C que leia 12 números inteiros e os armazene em um vetor. 
Crie um novo vetor com o dobro de cada elemento do primeiro vetor e imprima-o.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int z, num[12], numD[12];

    printf("\nO dobro\n");
    printf("\nInsira 12 numeros inteiros, separe-os com Enter: ");
    for(z = 0; z < 12; z++){
        scanf("%d", &num[z]);
    }

    for(z = 0; z < 12; z++){
        numD[z] = num[z] * 2;
    }

    printf("\nVeja o vetor original: ");
    for(z = 0; z < 12; z++){
        printf("%d ", num[z]);
    }
    printf("\n\nO novo vetor com os valores dobrados e: ");
    for(z = 0; z < 12; z++){
        printf("%d ", numD[z]);
    }

    return 0;
}