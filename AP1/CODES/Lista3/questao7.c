/*Escreva um programa que solicite ao usuário o raio de um círculo e calcule a sua área. 
O programa deve exibir o resultado na tela. Utilize a biblioteca Math.h*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float raio;
    const float pi = 3.1415;
    printf("Calculo da area do circulo\n");

    printf("Insira o raio do circulo: ");
    scanf("%f", &raio);

    float area = pi * pow(raio, 2);

    printf("\nA area do circulo e: %0.2f", area);

    return 0;
}