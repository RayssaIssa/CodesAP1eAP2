/*(Elabore um arquivo com extensão .h) Faça uma sub-rotina que receba como parâmetro um vetor A
com 3 números reais e retorne esses números ordenados de forma crescente. Imprimir o vetor ordenado 
no programa principal.*/
#include <stdio.h>
float crescente(float *vetor, int tamanho){
    int i, j;
    float aux;
    for(i = 0; i < tamanho; i++){
        for (j = i + 1; j < 3; j++) {
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}
int main(){
    int i;
    float ordem[3];
    printf("\nInsira tres numeros reais: ");
    for(i = 0; i < 3; i++)
        scanf("%f", &ordem[i]);
    crescente(ordem, 3);
    printf("\nNova ordem: ");
    for(i = 0; i < 3; i++)
        printf(" %.3f", ordem[i]);
}