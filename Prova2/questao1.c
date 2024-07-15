/*Escreva um programa em C que gerencie as notas de uma turma de alunos em uma escola. O programa deve:
a. Armazenar as informações de até 3 alunos, incluindo nome, número de matrícula e três notas. (4 pontos)
i. Declare estruturas para armazenar as informações de cada aluno (nome, número de matrícula e três notas). (2 ponto)
ii. Calcular a média de cada aluno. (1 ponto)
iii. Utilize um laço de repetição para ler as informações de cada aluno. (1 ponto)
b. Utilize outro laço de repetição para exibir as informações de cada aluno (2 pontos):
i. nome (0,5 pontos)
ii. número de matrícula (0,5 pontos)
iii. três notas (0,5 pontos)
iv. média final (0,5 pontos)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    printf("\n\nProva 2\n");
    int i, j, alunos = 0;
    int matricula[3];
    float nota[3][3], media[3];
    float soma = 0;
    char nome[3][100];
    char inserirMais;

    printf("\nSistema de notas\n");
    printf("\nDeseja inserir um aluno? Para Sim digite 'S' e para Nao digite 'N': ");
    scanf(" %c", &inserirMais);
    do{
        if(inserirMais == 'S'){
            if(alunos < 3){
                printf("\n\nInsira o nome do aluno: ");
                setbuf(stdin, NULL);
                gets(nome[alunos]);
                printf("\n\nInsira a matricula do aluno: ");
                scanf(" %i", &matricula[alunos]);
                printf("\n\nDigite 3 notas do aluno: ");
                soma = 0;
                for(j = 0; j < 3; j++){                        
                    scanf("%f", &nota[alunos][j]);
                    soma += nota[alunos][j];
                }
                media[alunos] = soma/3; 
                alunos++;
            }else{
                printf("\n\nO numero maximo de alunos foi atingido.\n");
                break;
            }
        }else if(inserirMais == 'N'){
            break;
        }else{
            printf("\nValor invalido!");
        }
        printf("\nDeseja inserir um aluno? Para Sim digite 'S' e para Nao digite 'N': ");
        scanf(" %c", &inserirMais);
    }while(alunos <= 3 && inserirMais == 'S');

    for (i = 0; i < alunos; i++) {
        printf("\nAluno %d\n", i+1);
        printf("\nNome: %s", nome[i]);
        printf("\nMatricula: %d", matricula[i]);
        printf("\nNotas: ");
        for (j = 0; j < 3; j++) {
            printf("%.1f ", nota[i][j]);
        }
        printf("\nMedia: %.1f", media[i]);
        printf("\n");
    }
    return 0;
}