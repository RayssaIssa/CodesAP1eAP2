/*
Crie uma biblioteca “*.h” que calcule a Média Aritmética e Média Ponderada. Para a média 
ponderada, assuma os seguintes pesos: 5, 3, 2. No programa principal, receba as seguintes variáveis 
globais: 3 notas de um aluno e o tipo de média ‘P’ ou ‘A’, ponderada ou aritmética, 
respectivamente. A média calculada deverá ser devolvida ao programa principal para então ser 
mostrada.*/
#include <stdio.h>
float n1, n2, n3;
char tipoMedia;
int p1, p2, p3;
#include "oito.h"
void main(){
    printf("\nDigite as 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    fflush(stdin);
    printf("\nDigite o tipo de media, 'P' para ponderada ou 'A' para aritmetica: ");
    scanf("%c", &tipoMedia);

    if(tipoMedia == 'P'){
        printf("\nDigite os pesos das 3 notas: ");
        scanf("%i %i %i", &p1, &p2, &p3);
        printf("\nA media e: %.2f\n", media());
    }else if(tipoMedia == 'A'){
        printf("\nA media e: %.2f\n", media());
    }else{
        printf("\nValor invalido.\n");
    }    
}