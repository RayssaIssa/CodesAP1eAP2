/*Escreva um programa que solicite ao usuário dois números inteiros e realize as operações de adição,
 subtração, multiplicação e divisão entre esses números, exibindo os resultados na tela.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    int num2;
    printf("\nInsira um numero inteiro: ");
    scanf("%i", &num1);
    printf("\nInsira outro numero inteiro: ");
    scanf("%i", &num2);

    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    int divisao = num1 / num2;

    printf("\nA soma dos numeros e: %i", soma);
    printf("\nA subtracao dos numeros e: %i", subtracao);
    printf("\nA multiplicacao dos numeros e: %i", multiplicacao);
    printf("\nA divisao dos numeros e: %i", divisao);

    return 0;
}