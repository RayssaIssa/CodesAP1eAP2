/*Crie um programa que calcule a média aritmética de três notas inseridas pelo usuário.
 O programa deve exibir a média final.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int nota1;
    int nota2;
    int nota3;

    printf("Calculo de media aritmetica\n");

    printf("\nInsira a nota 1: ");
    scanf("%i", &nota1);
    printf("\nInsira a nota 2: ");
    scanf("%i", &nota2);
    printf("\nInsira a nota 3: ");
    scanf("%i", &nota3);

    int media = (nota1 + nota2 + nota3)/3;
    printf("\nSua media final e: %i", media);

    return 0;
}