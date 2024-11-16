#include <stdio.h>
int trocaR(int *x, int *y){ //Feito por parametro por referencia
    int aux;
    aux =*x;
    *x = *y;
    *y = aux;
}
void minhaFuncao(int *vetor, int size){
    int i;
    for(i = 0; i < size; i++)
        vetor[i] = vetor[i] + i; //modifica cada elemento do vetor
}
void somaLinha(float m[][5], float v[]){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++)
            v[i] = v[i] + m[i][j];
    }
}
void main(){
    /*int b, a;

    //Passagem de parametro por referencia
    printf("\nDigite o valor de a: ");
    scanf("%d", &a);
    printf("\nDigite o valor de b: ");
    scanf("%d", &b);
    printf("\nOs valores digitados: \t%d \t%d\n", &a, &b);

    trocaR(&a, &b);
    printf("Os valores trocados: \t%d \t%d \t%d \t%d\n", a, b, &a, &b);

    //Manipulacao de vetores
    int meuVetor[5] = {0, 0, 0, 0, 0}, i;
    printf("\nVetor original: ");
    for(i = 0; i < 5; i++)
        printf("%d ", meuVetor[i]);//mostra o vetor atual

    minhaFuncao(meuVetor, 5); //passa o vetor como referencia
    printf("\nNovo vetor: ");
    for(i = 0 ; i < 5; i++)
        printf("%d ", meuVetor[i]); //mostra o novo vetor*/
    
    //Manipulacao de matriz
    int i, j;
    float a[3][5], b[3];
    for(i = 0; i < 3; i++){
        b[i] = 0;
        for(j = 0; j < 5; j++){
            printf("\nDigite o valor da matriz [%d] [%d]: \t", i+1, j+1);
            scanf("%f %*c", &a[i][j]);
        }
    }
    somaLinha(a, b);
    for(i = 0; i < 3; i++)
        printf("\nSoma de b[%d][j]: %f", i+1, b[i]);
}