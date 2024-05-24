/*Escreva um programa que recebe um número inteiro e verifica se ele é positivo, negativo ou zero. 
Exiba a mensagem correspondente de acordo com o número inserido*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    printf("Insira um numero inteiro: ");
    scanf("%i", &num);

    if(num == 0){
        printf("O numero e 0.");
    }else if(num > 0){
        printf("O numero e positivo.");
    }else if(num < 0){
        printf("O numero e negativo.");
    }
    return 0;
}