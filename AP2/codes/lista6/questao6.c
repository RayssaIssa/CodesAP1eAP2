/*(Elabore um arquivo com extensão .h) Faça uma sub-rotina que receba uma matriz [2][3] por 
referência. A sub-rotina deverá verificar os valores pares da matriz e, caso seja, a sub-rotina deverá 
substituir o valor por 1000.*/
#include <stdio.h>
int substituir(int matriz[2][3]){
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] % 2 == 0){
                matriz[i][j] = 1000;
            }
        }
    }
}
void main(){
    int i, j, matriz[2][3] = {{2, 5, 8}, {1, 4, 7}};

    printf("\nAntiga matriz: ");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++)
            printf(" %d", matriz[i][j]);
    }

    substituir(matriz);

    printf("\nNova matriz: ");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++)
            printf(" %d", matriz[i][j]);
    }
}