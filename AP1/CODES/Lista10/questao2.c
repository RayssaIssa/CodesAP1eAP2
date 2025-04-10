/*Escreva um programa que leia uma matriz 3x3 e um número, e verifique se esse número está presente na matriz.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("\nA matriz e um numero\n");

    int num, matriz[3][3], i, j, esta, linha, coluna;

    printf("\n Insira os numeros na matriz 3x3: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n Insira um numero para fazer busca na matriz: ");
    scanf("%d", &num);

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(num == matriz[i][j]){
                esta = 1;
                linha = i + 1;
                coluna = j + 1;
            }
        }
    }
    
    if(esta == 1){
        printf("\nO numero %d esta na linha %d, coluna %d\n", num, linha, coluna);
    }else{
        printf("\nNao foi possivel encontrar o numero %d na matriz.\n", num);
    }

    return 0;
}