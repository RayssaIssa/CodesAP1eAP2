/*Faça um programa para consultar o número, o nome e a média de todos os alunos cadastrados no arquivo do Exercício 3. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    while (fread(&aluno, sizeof(struct ALUNOS), 1, arq) == 1) {
        float media = (aluno.n1 + aluno.n2) / 2.0;  
        printf("\nMatricula: %d\nNome: %s\nMedia: %.2f\n", aluno.matricula, aluno.nome, media);
        printf("-------------------------------------\n");
    }
    fclose(arq);
}
int main() {
    printf("\nAlunos cadastrados\n");
    verificarAlunos("G:\\Meu Drive\\2024\\2024.2\\APII\\codes\\lista8\\alunos.dat");
    return 0;
}