/*Faça um programa para criar um arquivo chamado “alunos.txt”, no qual cada registro será composto pelos seguintes campos: matrícula, nome, curso, nota1 e nota2.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ALUNOS{
    int matricula;
    float n1, n2;
    char nome[50], curso[100];
}alunos;

int main(){
    FILE *arq;
    arq = fopen("G:\\Meu Drive\\2024\\2024.2\\APII\\codes\\lista8\\alunos.dat", "ab+");
    if (arq == NULL){
        printf("\nErro, nao abriu.");
    }else{
        printf("\nDigite a matricula: ");
        scanf("%d", &alunos.matricula);

        printf("\nDigite o nome: ");
        getchar();
        fgets(alunos.nome, sizeof(alunos.nome), stdin);
        alunos.nome[strcspn(alunos.nome, "\n")] = '\0';

        printf("\nDigite o curso: ");
        getchar();
        fgets(alunos.curso, sizeof(alunos.curso), stdin);
        alunos.curso[strcspn(alunos.curso, "\n")] = '\0';

        printf("\nDigite a nota 1: ");
        scanf("%f", &alunos.n1);

        printf("\nDigite a nota 2: ");
        scanf("%f", &alunos.n2);

        fwrite(&alunos, sizeof(struct ALUNOS), 1, arq);
    }
    fclose(arq);
    return 0;
}