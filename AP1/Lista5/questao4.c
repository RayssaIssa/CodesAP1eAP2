/*Escreva um programa que verifica se uma pessoa pode dirigir um carro. Para poder dirigir, 
a pessoa deve ter idade igual ou superior a 18 anos e possuir uma carteira de motorista válida. 
O programa deve exibir a mensagem "Pode dirigir" se a pessoa satisfizer as duas condições, 
e "Não pode dirigir" caso contrário.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int idade;
    char valido;
    printf("Insira sua idade: ");
    scanf("%i", &idade);
    printf("\nSua carteira de motorista e valida? Se sim, digite S. Caso contrario, digite N. ");
    setbuf(stdin, NULL);
    scanf("%c", &valido);

    if(idade >= 18 && valido == 'S'){
        printf("\nPode dirigir");
    }else{
        printf("\nNao pode dirigir");
    }
    return 0;
}