/*Crie uma estrutura "Aluno" com os campos nome, idade e nota. Em seguida, declare um ponteiro 
para uma variável da estrutura tipo Aluno. Usando o ponteiro, preencha os campos da estrutura com 
dados informados pelo usuário e imprima os dados do aluno na tela. */
#include <stdio.h>
struct ALUNO{
    char nome[20];
    int idade;
    float nota;
}aluno;
int main()
{
    struct ALUNO *ptrS = &aluno;
    printf("\nInsira o nome do aluno: ");
    gets(ptrS->nome);
    printf("\nInsira a idade do aluno: ");
    scanf("%d", &ptrS->idade);
    printf("\nInsira a media do aluno: ");
    scanf("%f", &ptrS->nota);
    
    printf("\nNome: %s\nIdade: %d\nMedia: %.1f", ptrS->nome, ptrS->idade, ptrS->nota);
    return 0;
}
