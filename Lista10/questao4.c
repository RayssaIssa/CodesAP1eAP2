/*Escreva um programa que leia uma matriz 3x4 em que cada linha seja um aluno e cada coluna uma nota, no fim faça a média de cada aluno.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("\nMedia dos alunos\n");
    printf("\nInsira a matricula e a media de 3 alunos: \n");

    int notasAlunos[3][4], i, j;
    float soma, media;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &notasAlunos[i][j]);
        }
    }

    printf("\nA notas dos alunos e: \n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", notasAlunos[i][j]);
        }
        printf("\n");
    }

    printf("\n A media da notas de cada aluno e: \n");

    for(i = 0; i < 3; i++){
        soma = 0;
        for(j = 1; j < 4; j++){
            soma += notasAlunos[i][j];
        }
        media = soma/3;
        printf("\n A media do aluno %i e: %.1f\n", notasAlunos[i][0], media);
    }

    return 0;
}