/*Crie um programa que calcule o IMC (Índice de Massa Corporal) de uma pessoa. 
O programa deve solicitar ao usuário o peso e a altura, e em seguida exibir o valor do IMC.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("Calculo do IMC\nUtilize '.' para separar as casa decimais!\n");

    float peso;
    float altura;

    printf("Insira seu peso: ");
    scanf("%f", &peso);
    printf("Insira sua altura: ");
    scanf("%f", &altura);

    float imc = peso / pow(altura, 2);
    printf("Seu IMC e: %0.2f", imc);

    return 0;
}