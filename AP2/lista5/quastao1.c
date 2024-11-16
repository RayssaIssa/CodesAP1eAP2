/*Escreva uma função recursiva que calcule a soma dos primeiros n números naturais.*/
#include <stdio.h>
#include <stdlib.h>

int SOMA(int x){
    if (x == 1){
        return 1;
    }else{
        return x + SOMA(x - 1);
    }
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d", SOMA(n));
}