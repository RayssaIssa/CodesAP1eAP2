/*
Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a 
informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ALUNO{
    char nome[100];
    int matricula;
    char curso[100];
};
int main(){
    struct ALUNO alunos[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("\nDigite o nome: ");
        scanf("%[^\n]", alunos[i].nome);
        fflush(stdin);
        printf("\nDigite a matricula: ");
        scanf("%d", &alunos[i].matricula);
        fflush(stdin);
        printf("\nDigite o curso: ");
        scanf("%[^\n]", alunos[i].curso);
        fflush(stdin);
    }
    for(i = 0; i < 5; i++){
        printf("\nNome: %s \nMatricula: %d \nCurso: %s", alunos[i].nome, alunos[i].matricula, alunos[i].curso);
        printf("\n\n");
    }
}