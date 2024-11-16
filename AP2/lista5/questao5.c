/*Escreva uma função recursiva que calcule o n-ésimo termo da sequência de Fibonacci.*/
#include <stdio.h>
#include <stdlib.h>

int FIBONACCI(int n){
    if(n <= 1){
        return n;
    }else{
        return FIBONACCI(n - 1) + FIBONACCI(n - 2);
    }
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d", FIBONACCI(n));
}