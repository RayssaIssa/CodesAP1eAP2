/*Escreva um programa que calcule e exiba a área de um retângulo. 
O usuário deve inserir os valores da base e altura.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Calculo da area do Retangulo");
    float base;
    float altura;

    printf("\nInsira o valor da base: ");
    scanf("%f", &base);
    printf("\nInsira o valor da altura: ");
    scanf("%f", &altura);

    float area = base * altura;
    printf("O valor da area e: %0.1f", area);
}