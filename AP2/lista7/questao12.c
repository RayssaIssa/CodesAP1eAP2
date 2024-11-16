/*Escreva um módulo em C que, usando variáveis locais, declare um ponteiro para uma estrutura que 
represente um aluno (com nome, idade e média). Depois, crie uma variável desse tipo e use o ponteiro 
para preencher os dados da estrutura. Em seguida, imprima os dados do aluno na tela. */
#include <stdio.h>
struct ALUNO{
    char nome[20];
    int idade;
    float media;
}aluno;
int main()
{
    struct ALUNO *ptrS = &aluno;
    printf("\nInsira o nome do aluno: ");
    gets(ptrS->nome);
    printf("\nInsira a idade do aluno: ");
    scanf("%d", &ptrS->idade);
    printf("\nInsira a media do aluno: ");
    scanf("%f", &ptrS->media);
    
    printf("\nNome: %s\nIdade: %d\nMedia: %.1f", ptrS->nome, ptrS->idade, ptrS->media);
    return 0;
}