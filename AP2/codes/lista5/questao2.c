/*Implemente a função recursiva e iterativa MULT, que faça a multiplicação de dois valores usando o 
operador de soma.*/
#include <stdio.h>
#include <stdlib.h>

int MULT(int x, int y){
    if(y == 0){
        return 0;
    }else{
        return x + MULT(x, y - 1);
    }
}

int main(){
    int num1, num2;
    printf("\nDigite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    printf("%d", MULT(num1, num2));
}