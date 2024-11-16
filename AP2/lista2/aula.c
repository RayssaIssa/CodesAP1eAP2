#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* PARTE 3 */
struct DATA{
    int dia, ano;
    char mes[15];
};
struct PESSOA{
    char nome[30];
    float n1, n2;
    int matricula;
    struct DATA nascimento;
}b;

int main(){
    printf("\nDigite o nome: ");
    scanf(" %s", b.nome);

    printf("\nDigite as notas: ");
    scanf("%f %f", &b.n1, &b.n2);

    printf("\nDigite a matricula: ");
    scanf("%i", &b.matricula);

    printf("\nDigite o dia de nascimento: ");
    scanf("%d", &b.nascimento.dia);

    printf("\nDigite o mes de nascimento: ");
    scanf(" %s", b.nascimento.mes);

    printf("\nDigite o ano de nascimento: ");
    scanf("%d", &b.nascimento.ano);

    printf("\nNome: %s \nNota 1: %.1f \nNota 2: %.1f \nMatricula: %d \nData de nascimento: %d / %s / %d", b.nome, b.n1, b.n2, b.matricula, b.nascimento.dia, b.nascimento.mes, b.nascimento.ano);
}


/* PARTE DOIS
struct UM{
    char nome[80];
    int matricula;
    float n1, n2;
};

int main(){
    struct UM v[3];
    int i;
    float media = 0;

    for(i = 0; i < 3; i++){
        printf("\nDigite o nome: ");
        scanf(" %s", v[i].nome);

        printf("\nDigite a matricula: ");
        scanf("%i", &v[i].matricula);

        printf("\nDigite a nota um: ");
        scanf("%f", &v[i].n1);

        printf("\nDigite a nota 2: ");
        scanf("%f", &v[i].n2);

        media = media + v[i].n1 + v[i].n2;
    }
    printf("\nA media e: %.1f\n", media/6);
}*/

/* PARTE UM
struct FICHA{
    char name[80];
    float nota;
    int nFaltas;
};

int main(){
    struct FICHA mat[3];
    int i;

    for(i = 0; i < 3; i++){
        printf("\nDigite o nome: ");
        scanf(" %s", mat[i].name);

        printf("\nDigite a nota: ");
        scanf("%f", &mat[i].nota);

        printf("\nDigite o numero de faltas: ");
        scanf("%i", &mat[i].nFaltas);
    }

    for(i = 0; i < 3; i++){
        printf("\n %s %.1f %d \n", mat[i].name, mat[i].nota, mat[i].nFaltas);
    }
}*/