/*Faça um programa que crie um arquivo TEXTO em disco, com o nome “dados.txt” e escreva neste arquivo em disco uma contagem de 10 em 10, que vá de 0 até 100, com um número em cada linha. */
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *arq;
    arq = fopen("G:\\Meu Drive\\2024\\2024.2\\APII\\codes\\lista8\\dados.txt", "w");
    if (arq == NULL){
        printf("\nErro, nao abriu.");
    }else{
        int n = 0;
        while (n <= 100){
            fprintf(arq, "\n%d", n);
            n += 10;
        }
    }
    fclose(arq);
    return 0;
}