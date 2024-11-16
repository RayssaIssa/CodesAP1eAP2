#include <stdio.h>
#include <stdlib.h>
#include "DOIS.h"
#include "TRES.h"
#include "QUATRO.h"
#include "CINCO.h"
#include "SEIS.h"
#include "SETE.h"

void menu(){
    printf("\nQuestoes disponiveis: ");
    printf("\n2 - Verificacao de numero negativo \n3 - Conversao de tempo \n4 - Soma entre dois numeros \n5 - Verificacao de triangulo \n6 - Calculo de combinacoes \n7 - Calculo de taxas\n0 - Sair\n");
    printf("\nDigite o numero da questao escolhida: \n");
}

void main(){
    menu();
    int questao;
    scanf("%d", &questao);
    do{
        menu();
        scanf("%d", &questao);
        switch (questao){
        case 0:
            printf("\nOperacao encerrada.\n");
            break;
        case 2:
            printf("\nDigite um numero inteiro: ");
            int n;
            scanf("%d", &n);
            printf("\n%d\n", POSITIVO_NEGATIVO(n));
            break;
        case 3:
            printf("\nInsira os segundos: ");
            int segundos;
            scanf("%d", &segundos);
            printf("\n%i:%i:%i\n", conversor_De_Tempo(segundos));
            break;
        case 4: 
            printf("\nDigite dois numero positivos, separe-os por espaco: ");
            int x, y;
            scanf("%d %d", &x, &y);
            printf("\nA soma entre eles e: %d\n", soma(x, y));
            break;
        case 5:
            printf("\nInsira os valores do triangulo: ");
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            int tipo = TRIANGULO(a, b, c);
            if(tipo != 0){
                if(tipo == 1){
                    printf("\nO tipo de triangulo e Equilatero\n");
                }else if(tipo == 2){
                    printf("\nO tipo de triangulo e Isosceles\n");
                }else if (tipo == 3){
                    printf("\nO tipo de triangulo e Escaleno\n");
                }                
            }else{
                printf("\nOs valores nao sao de um triangulo.\n");
            }
            break;
        case 6:
            printf("\nInsira a quantidade de elementos: ");
            int quant, part;
            scanf("%d", &quant);
            if(quant < 0){
                printf("\nNão é possivel usar uma quantidade negativa!\n");
            }else{
                printf("Insira as partes dos elementos do conjunto: ");
                scanf("%d", &part);
                printf("\nA quantidade de combinacoes possiveis e: %d\n", COMBINA(quant, part));
            }            
            break;
        case 7:
            printf("\nInsira a quantidade de horas de tres clientes.\n");
            int horas[3], i;
            float taxas[3];
            for(i = 0; i < 3; i++){
                printf("\nDigite a quantidade de horas que o carro ficou estacionado: ");
                scanf("%d", &horas[i]);
                fflush(stdin);
                taxas[i] = CALCULO_TAXAS(horas[i]);
            }
            printf("\nCarro    Horas    Taxas\n  1       %d        %.2f\n  2       %d        %.2f\n  3       %d        %.2f\n", horas[0], taxas[0], horas[1], taxas[1], horas[2], taxas[2]);
            float total = taxas[0] + taxas[1] + taxas[2];
            int totalHoras = horas[0] + horas[1] + horas[2];
            printf("\nTotal:     %d        %.2f\n", totalHoras, total);
            break;
        default:
            printf("\nQuestao invalida.\n");
            break;
        }
    }while(questao != 0);
}