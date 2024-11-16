/*Escreva um programa que verifica se um número inteiro é par. 
O programa deve exibir a mensagem "O número é par" se o número for par, e "O número é ímpar" caso contrário.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int numPar;
    printf("Insira um numero para verificar se ele eimpar ou par\n");
    scanf("%i", &numPar);

    if (numPar % 2 == 0){
        printf("O numero e par");
    }else{
        printf("O numero e impar");
    }
    return 0;
}