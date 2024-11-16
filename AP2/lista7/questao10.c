/*Escreva um módulo em C que, usando variáveis locais, que declare um vetor com 5 posições e um 
ponteiro para essa variável. Usando ponteiro, retorne a soma de todos os elementos do vetor. */
#include <stdio.h>
int main(){
    int vetor[5], i, soma = 0;
    int *ptrV;
    printf("\nDigite o vetor de 5 numeros inteiros: ");
    for(i = 0; i < 5; i++){
        scanf("%i", &vetor[i]);
    }
    ptrV = &vetor;
    
    for(i = 0; i < 5; i++){
        soma += *(ptrV + i);
    }
    printf("\nA soma de todos os itens e: %i", soma);
    return 0;
}