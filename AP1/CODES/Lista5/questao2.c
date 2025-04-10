/*Escreva um programa que verifica se um aluno foi aprovado em uma disciplina. 
O aluno é considerado aprovado se sua média final for maior ou igual a 7 e se ele não tiver 
faltado mais de 25% das aulas. O programa deve exibir a mensagem "Aluno aprovado" se o aluno satisfazer as 
duas condições, e "Aluno reprovado" caso contrário*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    float media;
    float frequencia;

    printf("Insira sua media final: ");
    scanf("%f", &media);
    printf("\nInsira sua porcentagem de frequencia: ");
    scanf("%f", &frequencia);

    if(media>=7 && frequencia > 75){
        printf("Aluno aprovado");
    }else{
        printf("Aluno Reprovado");
    }
    return 0;
}