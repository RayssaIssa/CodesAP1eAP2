/*Crie um programa que converta uma temperatura em graus Celsius para Fahrenheit. 
O usuário deve inserir a temperatura em Celsius e o programa deve exibir o resultado em Fahrenheit.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float celsius;
    float fahrenheit;

    printf("Conversao Celsius para Fahrenheit\n\nInsira a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("A temperartura em Fahrenheit e: %0.1fF", fahrenheit);
    return 0;
}