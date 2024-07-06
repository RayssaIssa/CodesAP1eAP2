/*Escreva um programa em C que leia 5 números reais e os armazene em um vetor. 
Calcule e imprima a média desses números.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int z, i;
    float numR[5], soma = 0;
    
    printf("\nCalculo de Media\n");
    printf("\nInsira 5 numeros reais, separe-os por Enter: ");
    for(z = 0; z < 5; z++){
        scanf("%f", &numR[z]);
    }
    
    for(i = 0; i < 5; i++){
        soma += numR[i];
    }
    float media = soma/5;
    
    printf("\nA media dos numeros e: %.2f", media);

    return 0;
}