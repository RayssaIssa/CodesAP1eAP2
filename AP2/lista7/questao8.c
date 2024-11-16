/*Escreva um módulo em C que, usando variáveis locais, declare uma variável inteira e um ponteiro 
para essa variável, e depois altere o valor da variável através do ponteiro.*/
#include <stdio.h>
int main(){
    int i = 3, *ptrI = &i;
    printf("\nValor de I: %d, Valor do ponteiro: %i", i, ptrI);
    *ptrI = 5;
    printf("\nNovo I: %d", i);
    return 0;
}