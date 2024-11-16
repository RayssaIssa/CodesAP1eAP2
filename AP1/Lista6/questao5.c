/*Escreva um programa que recebe um número inteiro de 1 a 5 e exibe uma mensagem correspondente a uma avaliação.
Por exemplo:
- Se o usuário digitar 1, o programa deve exibir "Péssimo"
- Se digitar 2, deve exibir "Ruim", e assim por diante.
- Se digitar 3, deve exibir "Médio", e assim por diante.
- Se digitar 4, deve exibir "Bom", e assim por diante.
- Se digitar 5, deve exibir "Excelente", e assim por diante.
Utilize estrutura switch-case.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    printf("Insira um numero inteiro de 1 a 5: ");
    scanf("%i", &num);
    
    switch (num){
    case 1:
        printf("Pessimo");
        break;
    case 2:
        printf("Ruim");
        break;
    case 3:
        printf("Medio");
        break;
    case 4:
        printf("Bom");
        break;
    case 5:
        printf("Excelente");
        break;
    default:
        printf("Numero errado");
    }
    return 0;
}