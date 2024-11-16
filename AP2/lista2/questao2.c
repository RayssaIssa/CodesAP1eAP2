/*
Faça um programa que:
a) Preencha os campos da struct do exercício anterior
b) Imprima os campos da struct do exercício anterior
*/
#include <stdio.h>
#include <stdlib.h>
struct ACOES_BOLSA{
    char nomeCompanhia[100], areaAtuacao[50];
    float valorAtualAcao, valorAnterior;
    double variacaoAcao;
};

int main(){

    struct ACOES_BOLSA empresa = {"A Empresa", "Servicos", 540.00, 489.00, 5.89};

    printf("\nNome da empresa: %s \nArea de atuacao: %s \nValor atual de acao: R$%.2f \nValor anterior de acao: R$ %.2f \nValor de variacao de acao: %f", empresa.nomeCompanhia, empresa.areaAtuacao, empresa.valorAtualAcao, empresa.valorAnterior, empresa.variacaoAcao);
}