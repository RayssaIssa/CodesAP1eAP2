/* Escreva um módulo em C que, usando variáveis locais, declare um vetor de inteiros e um ponteiro 
para esse vetor. Depois, peça para o usuário digitar os valores do vetor e use o ponteiro para imprimir 
os valores na tela. */
#include <stdio.h>
int main(){
    int vetor[3], *ptrV, i;
    printf("\nDigite 3 valores inteiros: ");
    for(i = 0; i < 3; i++){
        scanf("%d", &vetor[i]);
    }
    ptrV = &vetor;
    printf("\nO vetor e: \n");
    for(i = 0; i < 3; i++){
        printf("[%d] ", *(ptrV + i));
    }
    return 0;
}