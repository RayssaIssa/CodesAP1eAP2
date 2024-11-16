#include <stdio.h>
typedef struct{
    int matricula;
    float notas[3];
}Aluno;

Aluno Turma[5];
void LeAluno (int id);
void ImprimeTurma();
float CalculaMediaAluno(Aluno aluno);

int main(){
    int i;
    for(i = 0; i < 5; i++){
        LeAluno(i); // função que lê de teclado os dados do aluno
    }
    ImprimeTurma();
    for(i = 0; i < 5; i++){
        float media = CalculaMediaAluno(Turma[i]);// função que calcula a média das notas de um aluno
        printf("\nAluno %d - Media = %.1f\n", Turma[i].matricula, media); // imprime os dados do aluno
    }
    return 0;
}

void LeAluno(int id){
    int j;
    printf("\nInsira os valores da turma %d",id+1);        
    printf("\nInsira a matricula: ");
    scanf("%d", &Turma[id].matricula);
    for(j = 0; j < 3; j++){
        printf("\nDigite a nota: ");
        scanf("%d", &Turma[id].notas[j]);
    }
}

void ImprimeTurma(){
    int i;
    for(i = 0; i < 5; i++){
        printf("\nTurma: %d Matricula: %d\n", i+1, Turma[i].matricula);
    }
}

float CalculaMediaAluno(Aluno aluno){
    float soma = 0;
    int j;
    for(j = 0; j < 3; j++) {
        soma += aluno.notas[j];
    }
    return soma / 3; 
}