/*
Crie uma biblioteca “*.h” que manipulando variáveis globais x e y, contenha quatro sub-rotinas 
que fazem as operações matemáticas básicas: int somar( ), int subtrair( ), int multiplicar( ) e float 
dividir( ). O programa principal (módulo) irá ler as variáveis e imprimir os resultados.
*/
#include <stdio.h>
int x, y;
#include "cinco.h"
void main(){
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &x);
    
    printf("\nDigite o segundo numero: ");
    scanf("%d", &y);

    printf("\nA soma e: %d\n", soma());
    printf("\nA subtracao e: %d\n", subtracao());
    printf("\nA multiplicacao e: %d\n", multiplicacao());
    printf("\nA divisao e: %.1f\n", divisao());
}