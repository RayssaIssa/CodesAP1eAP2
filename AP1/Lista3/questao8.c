/*Desenvolva um programa que converta um valor em metros para centímetros e milímetros. 
O usuário deve inserir o valor em metros, e o programa deve exibir os equivalentes em centímetros e milímetros*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Conversor de medida\n");

    float metros;
    printf("Insira o valor a ser convertido em Metros: ");
    scanf("%f", &metros);

    float centimetros = metros * 100;
    float milimetros = metros * 1000;

    printf("\nValor em Centimetros: %0.1f cm", centimetros);
    printf("\nValor em milimetros: %0.1f mm", milimetros);

    return 0;
}