/*Escreva uma função recursiva para calcular a seguinte expressão:*/
#include <stdio.h>
#include <stdlib.h>

int SOMATORIO(int n){
    if(n == 1){
        return 0;
    }else{
        return 2 * (n - 1) + SOMATORIO(n - 1);
    }
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d", SOMATORIO(n));
}