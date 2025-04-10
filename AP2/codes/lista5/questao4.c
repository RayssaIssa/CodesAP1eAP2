/*Usando a função recursiva para calcular o fatorial, determine o resultado do fatorial quádruplo, de 
um número N, que é dado por:
(2𝑛)!/𝑛! */
#include <stdio.h>
#include <stdlib.h>

int FATORIAL(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * FATORIAL(n - 1);
    }
}

int FATORIAL_QUA(int n) {
    return FATORIAL(2 * n) / FATORIAL(n);
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d", FATORIAL_QUA(n));
}