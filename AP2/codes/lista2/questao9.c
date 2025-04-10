/*
Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter 
a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos. 
b) Encontre o aluno com maior nota da primeira prova. 
c) Encontre o aluno com maior média geral. 
d) Encontre o aluno com menor média geral.
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para 
aprovação.
*/
#include <stdio.h>
#include <stdlib.h>
struct ALUNOS{
    char nome[100];
    int matricula;
    float n1, n2, n3;
};
int main(){
    struct ALUNOS aluno[5];
    int i, numAlunoN1, alunoMaiorMedia, alunoMenorMedia;
    float maiorN1 = 0, maiorMedia = 0, menorMedia = 0, medias[5];
    for(i = 0; i < 5; i++){
        printf("\nInsira o nome do aluno: ");
        scanf(" %s", aluno[i].nome);
        fflush(stdin);
        printf("\nInsira a matricula do aluno: ");
        scanf("%d", &aluno[i].matricula);
        printf("\nInsira as tres notas do aluno: ");
        scanf("%f %f %f", &aluno[i].n1, &aluno[i].n2, &aluno[i].n3);
    }
    for(i = 0; i < 5; i++){
        if(aluno[i].n1 > maiorN1){
            maiorN1 = aluno[i].n1;
            numAlunoN1 = i;
        }else{
            maiorN1 = maiorN1;
        }
    }
    printf("\n\nO aluno com a maior N1 e: %s", aluno[numAlunoN1].nome);

    maiorMedia = (aluno[0].n1 + aluno[0].n2 + aluno[0].n3) / 3; 
    menorMedia = maiorMedia; 
    alunoMaiorMedia = 0; 
    alunoMenorMedia = 0;
    for (i = 0; i < 5; i++){
        medias[i] = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3) / 3; 
        if (medias[i] > maiorMedia){ 
            maiorMedia = medias[i];
            alunoMaiorMedia = i;
        }
        if (medias[i] < menorMedia){
            menorMedia = medias[i];
            alunoMenorMedia = i;
        }
    }
    printf("\n\nO aluno com a maior media e: %s com media de: %.1f", aluno[alunoMaiorMedia].nome, medias[alunoMaiorMedia]);
    printf("\nO aluno com a menor media e: %s com media de: %.1f", aluno[alunoMenorMedia].nome, medias[alunoMenorMedia]);
    return 0;
}