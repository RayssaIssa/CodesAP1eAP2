/*Faça um programa para excluir os alunos que foram reprovados, sabendo que para serão reprovados se a média aritmética for menor do que 6,0. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ALUNOS {
    int matricula;
    float n1, n2;
    char nome[50], curso[100];
};
void verificarAprovacao(const char *nomeArquivo, int matricula) {
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
            printf("Nome: %s\nCurso: %s\nNota 1: %.1f\nNota 2: %.1f\n", aluno.nome, aluno.curso, aluno.n1, aluno.n2);

            float media = (aluno.n1 + aluno.n2)/2;

            if(media < 6){
                printf("\nMedia: %.1f\tReprovado!", media);
            }else{
                printf("\nMedia: %.1f\tAprovado!", media);
            }

            fseek(arq, -sizeof(struct ALUNOS), SEEK_CUR);
            fwrite(&aluno, sizeof(struct ALUNOS), 1, arq);
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
    printf("\nDigite a matricula do aluno para verificar media: ");
    scanf("%d", &matricula);
    verificarAprovacao("G:\\Meu Drive\\2024\\2024.2\\APII\\codes\\lista8\\alunos.dat", matricula);
    return 0;
}