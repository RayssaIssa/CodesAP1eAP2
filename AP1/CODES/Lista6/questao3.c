/*Escreva um programa que recebe um número inteiro de 1 a 12 e exibe o nome do mês correspondente. 
Por exemplo: se o usuário digitar 1, o programa deve exibir "Janeiro", se digitar 2, deve exibir "Fevereiro", 
e assim por diante. Utilize estrutura switch-case.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    printf("Insira um numero de 1 a 12: ");
    scanf("%i", &num);

    switch (num){
    case 1:
        printf("Fevereiro");
        break;
    case 2:
        printf("Marco");
        break;
    case 3:
        printf("Abril");
        break;
    case 4:
        printf("Maio");
        break;
    case 5:
        printf("Junho");
        break;
    case 6:
        printf("Julho");
        break;
    case 7:
        printf("Agosto");
        break;
    case 8:
        printf("Setembro");
        break;
    case 9:
        printf("Outubro");
        break;
    case 10:
        printf("Novembro");
        break;
    case 11:
        printf("Dezembro");
        break;
    case 12:
        printf("Janeiro");
        break;
    default:
        printf("Numero invalido");
    }
    return 0;
}