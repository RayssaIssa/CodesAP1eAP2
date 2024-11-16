/*– (Elabore um arquivo com extensão .h) Faça uma função void Elementos(int *v) que receba um vetor 
com 8 números inteiros. A função deverá identificar e substituir os elementos entre 15 e 20 por 0. 
Imprimir o novo vetor no programa principal.*/
#include <stdio.h>
void Elementos(int *v){
    int i;
    for(i = 0; i < 8; i++){
        if(v[i] > 15 && v[i] < 20){
            v[i] = 0;
        }
    }
}
void main(){
    int vetor[8], i;
    printf("\nInsira um vetor de 8 valores inteiros: ");
    for(i = 0; i < 8; i++)
        scanf("%d", &vetor[i]);
    Elementos(vetor);
    printf("\nO novo vetor e: ");
    for(i = 0; i < 8; i++)
        printf(" %d", vetor[i]);
}