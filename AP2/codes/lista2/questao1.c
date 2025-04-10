/*
Crie uma sctruct para controlar ações de uma bolsa de valores com as seguintes informações:
• Nome da companhia
• Área de atuação da companhia
• Valor atual da ação (em reais)
• Valor anterior
• Variação da ação em porcentagem (double), ou seja, quanto a ação cresceu ou caiu desde a abertura da bolsa no dia
*/

#include <stdio.h>
#include <stdlib.h>
struct ACOES_BOLSA{
    char nomeCompanhia[100], areaAtuacao[50];
    float valorAtualAcao, valorAnterior;
    double variacaoAcao;
};