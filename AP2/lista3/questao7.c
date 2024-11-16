/*
Crie uma biblioteca “*.h” que contenha uma sub-rotina retorne o enésimo termo da sequência 
de Fibonacci, onde N é um número inteiro. Declare a variável N como global, sendo que a entrada 
e saída serão lidas no programa (módulo) principal
*/
#include <stdio.h>
int n;
#include "sete.h"
void main(){
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &n);

    printf("\nO enesimo termo da sequencia de Fibonacci e: %d\n", fibonacci());
}