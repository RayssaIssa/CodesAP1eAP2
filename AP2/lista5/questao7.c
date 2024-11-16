/*- Os números Tribonacci são definidos pela seguinte recursão:
𝑓(𝑛) = {
𝟎, 𝑠𝑒 𝑛 = 0
𝟎, 𝑠𝑒 𝑛 = 1
𝟏, 𝑠𝑒 𝑛 = 2
𝒇(𝒏 − 𝟏) + 𝒇(𝒏 − 𝟐) + 𝒇(𝒏 − 𝟑), 𝑠𝑒 𝑛 > 2
Implemente um método recursivo que receba por parâmetro um número inteiro positivo N e mostre e 
retorne o N-ésimo número da sequência de Tribonacci*/
#include <stdio.h>
#include <stdlib.h>

int TRIBONACCI(int n){
    if(n == 0 || n == 1){
        return 0;
    }else if(n == 2){
        return 1;
    }else{
        return TRIBONACCI(n - 1) + TRIBONACCI(n - 2) + TRIBONACCI(n - 3);
    }
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d", TRIBONACCI(n));
}