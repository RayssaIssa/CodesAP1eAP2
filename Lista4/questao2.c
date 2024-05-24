/*Crie um programa em C que solicite ao usuário o valor de um produto e a porcentagem de desconto a ser aplicada. 
Calcule e exiba o valor final do produto com o desconto aplicado.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float produto;
    float desconto;

    printf("Insira o valor do produto escolhido: ");
    scanf("%f", &produto);
    printf("Insira o valor do desconto: ");
    scanf("%f", &desconto);

    float valorD = (produto * desconto)/100;
    float valorF = produto - valorD;

    printf("O valor do produto com o desconto fica: R$%0.2f", valorF);

    return 0;
}