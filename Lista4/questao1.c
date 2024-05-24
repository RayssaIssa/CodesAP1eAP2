/* Escreva um programa em C que solicite ao usuário o valor principal, a taxa de juros anual e o período de tempo em anos. 
Em seguida, calcule e exiba o valor final com base na fórmula de juros compostos:  VF = P * (1 + r)^n
Em que VF é o valor final, P é o valor principal, r é a taxa de juros e n é o número de períodos. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float valorP;
    float taxa;
    float periodo;

    printf("Insira o valor principal: ");
    scanf("%f", &valorP);
    printf("\nInsira a taxa de juros: ");
    scanf("%f", &taxa);
    printf("\nInsira o periodo de tempo (em anos): ");
    scanf("%f", &periodo);

    float jurosC = valorP * pow((1 + taxa), periodo);

    printf("\n\nEste e o valor final a receber: %0.2f", jurosC);

    return 0;
}