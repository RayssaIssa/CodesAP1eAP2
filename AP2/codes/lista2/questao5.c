/*
Escreva um programa que receba dois structs do tipo dma, cada um representando uma data 
válida, e calcule o número de dias que decorreram entre as duas datas. 
struct dma 
{ int dia; 
 int mes; 
 int ano; 
};
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct DATA{
    int dia, mes, ano;
};
int main(){
    struct DATA datas[1];
    int i;
    for(i = 0; i < 2; i++){
        printf("\nInsira a data %i: ", i+1);
        scanf("%d %d %d", &datas[i].dia, &datas[i].mes, &datas[i].ano);
        if(datas[i].dia < 01 || datas[i].dia > 30){
            printf("Dia em formato invalido, tente novemente e insira uma data entre 01 e 30!");
            break;
        } else if(datas[i].mes < 01 || datas[i].mes > 12){
            printf("Mes em formato invalido, tente novemente e insira um mes entre 01 e 12!");
            break;
        }else{
            printf("\nDatas validas!");
        }
        //No finish.
    }
    return 0;
}