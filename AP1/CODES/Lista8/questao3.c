/*Escreva um programa em C que leia 10 números inteiros e os armazene em um vetor. 
Procure um determinado número no vetor e, caso ele seja encontrado, imprima a sua posição. 
Caso contrário, imprima uma mensagem informando que o número não foi encontrado.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num, z, nums[10], posicao[10], c = 0;

    printf("\nA procura do numero\n");
    printf("\nInsira 10 numeros inteiros, separe-os com Enter: ");
    for(z = 0; z < 10; z++){
        scanf("%d", &nums[z]);
    }    
    printf("\nAgora, digite o numero que deseja encontrar: ");
    scanf("%d", &num);
    
    for (z = 0; z < 10; z++){
        if (num == nums[z]){
            posicao[c] = z;
            c++;
        }   
    }

    if(c > 0){
        printf("\nA posicao do numero %d e: ", num);
        for(z = 0; z < c; z++){
            printf("%d  ", posicao[z]);
        }
    }else{
        printf("\nNao foi possivel encontrar o valor.\n");
    }    
    return 0;
}