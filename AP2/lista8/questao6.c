/*Faça um programa para alterar o curso dos alunos do arquivo criado no Exercício 3 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ALUNOS {
    int matricula;
    float n1, n2;
    char nome[50], curso[100];
};
void alterarCurso(const char *nomeArquivo, int matricula) {
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
            printf("Nome: %s\nCurso: %s\nNota 1: %.2f\nNota 2: %.1f\n", aluno.nome, aluno.curso, aluno.n1, aluno.n2);

            printf("\nDigite o novo Curso: ");
            getchar();
            fgets(aluno.curso, sizeof(aluno.curso), stdin);
            aluno.curso[strcspn(aluno.curso, "\n")] = '\0';

            fseek(arq, -sizeof(struct ALUNOS), SEEK_CUR);
            fwrite(&aluno, sizeof(struct ALUNOS), 1, arq);
            printf("\nCurso atualizada com sucesso.\n");
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
    printf("\nDigite a matricula do aluno para alterar o curso: ");
    scanf("%d", &matricula);
    alterarCurso("G:\\Meu Drive\\2024\\2024.2\\APII\\codes\\lista8\\alunos.dat", matricula);
    return 0;
}