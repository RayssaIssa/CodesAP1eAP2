/*Faça um programa para alterar as notas dos alunos no arquivo criado no Exercício 3*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ALUNOS {
    int matricula;
    float n1, n2;
    char nome[50], curso[100];
};
void alterarNotas(const char *nomeArquivo, int matricula) {
    FILE *arq = fopen(nomeArquivo, "r+b");
    if (arq == NULL) {
        printf("\nErro ao abrir o arquivo.\n");
        return;
    }
    struct ALUNOS aluno;
    int encontrado = 0;
    while (fread(&aluno, sizeof(struct ALUNOS), 1, arq) == 1) {
        if (aluno.matricula == matricula) {
            printf("\nAluno encontrado:\n");
            printf("Nome: %s\nCurso: %s\nNota 1: %.2f\nNota 2: %.2f\n", aluno.nome, aluno.curso, aluno.n1, aluno.n2);

            printf("\nDigite a nova Nota 1: ");
            scanf("%f", &aluno.n1);
            printf("\nDigite a nova Nota 2: ");
            scanf("%f", &aluno.n2);

            fseek(arq, -sizeof(struct ALUNOS), SEEK_CUR);
            fwrite(&aluno, sizeof(struct ALUNOS), 1, arq);
            printf("\nNotas atualizadas com sucesso.\n");
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("\nAluno com matricula %d nao encontrado.\n", matricula);
    }
    fclose(arq);
}
int main() {
    int matricula;
    printf("\nDigite a matricula do aluno para alterar as notas: ");
    scanf("%d", &matricula);
    alterarNotas("G:\\Meu Drive\\2024\\2024.2\\APII\\codes\\lista8\\alunos.dat", matricula);
    return 0;
}