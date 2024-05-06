//Escreva um programa que solicite ao usuário sua idade, e em seguida exiba essa informação na tela.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Sua idade: %i anos!\n", idade);

    return 0;
}
