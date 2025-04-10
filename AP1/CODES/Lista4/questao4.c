/*Escreva um programa em C que solicite ao usuário as idades de três pessoas e calcule a média das idades. 
Em seguida, exiba o resultado na tela. 
Dica: Utilize variáveis do tipo inteiro para armazenar as idades e uma variável do tipo float para calcular a média.
Certifique-se de utilizar mensagens claras para solicitar as idades ao usuário e exiba a média das idades com uma 
mensagem adequada na tela*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int pessoa1, pessoa2, pessoa3;
    printf("Calculo da media de 3 pessoas\n");
    printf("\nInsira a idade da primeira pessoa: ");
    scanf("%i", &pessoa1);
    printf("\nInsira a idade da segunda pessoa: ");
    scanf("%i", &pessoa2);
    printf("\nInsira a idade da terceira pessoa: ");
    scanf("%i", &pessoa3);

    float media = (pessoa1 + pessoa2 + pessoa3)/3;

    printf("\nA media das idades e: %0.1f", media);

    return 0;
}