/*Desenvolva um programa em C que converta uma determinada quantia em reais para dólares. 
Solicite ao usuário o valor em reais e o valor do dólar atual. Faça o cálculo da conversão e exiba o resultado na tela*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    float real;
    float cotacao = 5.09;

    printf("Insira o valor em Reais para converter: ");
    scanf("%f", &real);

    float dolar = real / cotacao;

    printf("\nO valor em dolar e: $%0.2f", dolar);

    return 0;
}