/*
Crie uma biblioteca “*.h” que contenha uma sub-rotina (submódulo, subprograma) que retorne 
1 se o número digitado (variável global) for ímpar ou 0 se for par.
*/
#include <stdio.h>
int x;
#include "quatro.h"
void main(){
    printf("\nDigite um numero: ");
    scanf("%d", &x);

    printf("\n%d\n", numero());
    printf("\n");
}