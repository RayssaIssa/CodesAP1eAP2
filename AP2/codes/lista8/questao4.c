/*Faça um programa para incluir alunos no arquivo criado no Exercício 3, lembrando que não podem existir dois alunos com o mesmo número de matrícula.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ALUNOS {
    int matricula;
    float n1, n2;
    char nome[50], curso[100];
};

int verifica_duplicidade(FILE *arq, int matricula) {
    struct ALUNOS aluno;
    fseek(arq, 0, SEEK_SET);  // Garante que está no início do arquivo
    while (fread(&aluno, sizeof(struct ALUNOS), 1, arq) == 1) {
        if (aluno.matricula == matricula) {
            return 1;
        }
    }
    return 0;
}
int main() {
    FILE *arq;
    struct ALUNOS aluno;
    char continuar;
    arq = fopen("G:\\Meu Drive\\2024\\2024.2\\APII\\codes\\lista8\\alunos.dat", "ab+");  // Abre o arquivo em modo binário
    if (arq == NULL) {
        printf("\nErro ao abrir o arquivo.");
        return 1;
    }
    do {
        printf("\nDigite a matricula: ");
        scanf("%d", &aluno.matricula);

        if (verifica_duplicidade(arq, aluno.matricula)) {
            printf("\nMatricula já cadastrada. Tente novamente.\n");
            continue;
        }
        printf("\nDigite o nome: ");
        getchar();
        fgets(aluno.nome, sizeof(aluno.nome), stdin);
        aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

        printf("\nDigite o curso: ");
        fgets(aluno.curso, sizeof(aluno.curso), stdin);
        aluno.curso[strcspn(aluno.curso, "\n")] = '\0';

        printf("\nDigite a nota 1: ");
        scanf("%f", &aluno.n1);

        printf("\nDigite a nota 2: ");
        scanf("%f", &aluno.n2);

        fwrite(&aluno, sizeof(struct ALUNOS), 1, arq);  

        printf("\nDeseja continuar? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');
    fclose(arq);
    return 0;
}