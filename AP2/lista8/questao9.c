/*Faça um programa para consultar todos os alunos cujos nomes começam pela letra M.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct ALUNOS {
    int matricula;
    float n1, n2;
    char nome[50], curso[100];
};
void verificarAlunos(const char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "rb");
    if (arq == NULL) {
        printf("\nErro ao abrir o arquivo.\n");
        return;
    }
    struct ALUNOS aluno;
    int encontrou = 0;
    while (fread(&aluno, sizeof(struct ALUNOS), 1, arq) == 1) {
        if (toupper(aluno.nome[0]) == 'M') {
            float media = (aluno.n1 + aluno.n2) / 2.0;
            printf("\nMatricula: %d\nNome: %s\nMedia: %.2f\n", aluno.matricula, aluno.nome, media);
            printf("------------------------------------------\n");
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("\nNenhum aluno encontrado com nome comecando com 'M'.\n");
    }
    fclose(arq);
}
int main() {
    printf("\nAlunos com nome que comecam com M\n");
    verificarAlunos("G:\\Meu Drive\\2024\\2024.2\\APII\\codes\\lista8\\alunos.dat");
    return 0;
}