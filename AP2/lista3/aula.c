#include <stdio.h>
int x;
#include "headerAula.h"

float MEDIA(){
    int nota, quantidade, i, soma = 0;
    float media;

    printf("\nDigite a quantidade: ");
    scanf("%d", &quantidade);

    for(i = 0; i < quantidade; i++){
        printf("\nNota: ");
        scanf("%d", &nota);
        soma += nota;
    }

    media = soma/quantidade;   

    return media;
}

void main(){
    int id;
    printf("\nDigite sua identidade: ");
    scanf("%d", &id);
    printf("\nA media e: %.1f\n\n", MEDIA());

    printf("\nDigite a variavel para multiplicar os valores: ");
    scanf("%d", x);

    printf("\nA soma e: %d\n", soma());
    printf("\nA subtracao e: %d\n", subtracao());
    printf("\nA multiplicacao e: %d\n", multiplicacao());
    printf("\nA divisao e: %d\n", divisao());
}