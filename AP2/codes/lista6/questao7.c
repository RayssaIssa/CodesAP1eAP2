/*Crie uma estrutura global chamada ESTUDANTE com os seguintes campos:
Nome (até 50 caracteres)
Idade (inteiro)
Nota (float)
Implemente a função void atualizarEstudante(struct ESTUDANTE *aluno), que permita atualizar a 
idade e a nota. Na função main, peça para o usuário inserir os dados iniciais do estudante, chame a 
função para realizar a atualização e, em seguida, mostre as informações atualizadas*/
#include <stdio.h>
struct ESTUDANTE{
    char nome[50];
    int idade;
    float nota;
};
void atualizarEstudante(struct ESTUDANTE *aluno){
    aluno->idade = aluno->idade;
    aluno->nota = aluno->nota;
}
void main(){
    struct ESTUDANTE a;
    printf("\nInsira o nome do aluno: ");
    scanf(" %s", a.nome);
    printf("\nInsira a idade do estudante: ");
    scanf("%d", &a.idade);
    printf("\nIsira a nota do estudante: ");
    scanf("%f", &a.nota);
    atualizarEstudante(&a.idade);
    atualizarEstudante(&a.nota);
    printf("\nDados:\n");
    printf("Nome: %s", a.nome);
    printf("\nIdade: %d", a.idade);
    printf("\nNota: %.1f", a.nota);
}