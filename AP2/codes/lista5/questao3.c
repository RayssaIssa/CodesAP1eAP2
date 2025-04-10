/*Implemente a função recursiva e iterativa POT, que devolve o valor x^n*/
#include <stdio.h>
#include <stdlib.h>

int POT(int x, int n){
    if(n == 0){
        return 1;
    }else{
        return x * POT(x, n - 1);
    }
}

int main(){
    int base, expo;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expo);
    printf("%d", POT(base, expo));
}