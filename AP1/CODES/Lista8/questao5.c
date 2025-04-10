/*Escreva um programa em C que leia 10 números inteiros e os armazene em um vetor. 
Em seguida, imprima os elementos do vetor na ordem inversa.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("\nNumeros em ordem inversa\n");
    printf("\nInsira 10 numeros inteiros, separe-os com Enter: ");

    int z, num[10];
    for(z = 0; z < 10; z++){
        scanf("%d", &num[z]);
    }

    printf("\nO vetor em sua ordem inversa e: ");
    for(z = 9; z >= 0; z--){
        printf("%d ", num[z]);
    }
    return 0;
}