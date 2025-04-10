/*Escreva um programa que verifica se um ano é bissexto.
Um ano é bissexto se for divisível por 4, mas não por 100, exceto se for divisível por 400.
O programa deve exibir a mensagem "Ano bissexto" se a condição for verdadeira, 
e "Ano não bissexto" caso contrário.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int ano;
    printf("Insira um ano para verificar se ele e bissexto ou nao: ");
    scanf("%i", &ano);

    if(ano % 4 == 0){
        if(ano % 100 == 0){
            if(ano % 400 == 0){
                printf("Ano bissexto");
            }
        }
    }else{
        printf("Ano nao bissexto");
    }
    return 0;
}