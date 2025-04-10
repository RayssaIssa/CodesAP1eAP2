/*Escreva um programa em C que leia 8 números inteiros e os armazene em um vetor. 
Encontre e imprima o maior e o menor elemento do vetor.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int b, z, num[8];

    printf("\nMaior e Menor\n");
    printf("\nInsira 8 numeros inteiros, separe-os com Enter: ");
    for(z = 0; z < 8; z++){
        scanf("%d", &num[z]);
    }

    int maior, menor;
    maior = num[0];
    menor = num[0];

    for (b = 0; b < 8; b++) {
        if (num[b] > maior) {
            maior = num[b];
        }
        if (num[b] < menor) {
            menor = num[b];
        }
    }
    printf("\nO maior numero e %d e o menor e %d\n", maior, menor);

    return 0;
}