/*Em teoria dos números, os Números de Pell são usados para calcular a √2^1. Os números de Pell são 
definidos pela seguinte recursão:
𝑓(𝑛) = {
0, 𝑠𝑒 𝑛 = 0
1, 𝑠𝑒 𝑛 = 1
2 ∗ 𝑓(𝑛 − 1) + 𝑓(𝑛 − 2), 𝑠𝑒 𝑛 > 2
Exemplo de números desta sequência são: 0, 1, 2, 5, 12, 29, 70, 169, 408, 985... 
Implemente uma função recursiva que receba como entrada um número N e retorne o N-ésimo número 
de Pell*/
#include <stdio.h>
#include <stdlib.h>

int PELL(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return 2 * PELL(n - 1) + PELL(n - 2);
    }
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d", PELL(n));
}