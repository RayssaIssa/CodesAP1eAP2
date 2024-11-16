#include <stdio.h>
//Questão 1
struct DISTRIBUIDORA{
    char bebida[50];
    int quantidade;
    float valor;
}a;

int SOMATORIO(int n){
    if(n == 1){
        return 1;
    }else{
        return n + SOMATORIO(n - 1);
    }
}

int MULT(int x){
    return 3 * x;

}

int main(){
    struct a;
    printf("\nQual o nome da bebida? ");
    scanf("%s", &a.bebida);
    printf("\nQual a quantidade? ");
    scanf("%d", &a.quantidade);
    printf("\nQual o valor da unidade? ");
    scanf("%f", &a.valor);

    printf("\nBebida: %s", a.bebida);
    printf("\nQuantidade: %d", a.quantidade);
    printf("\nValor da unidade: %.2f", a.valor);
    printf("\nValor total: R$%.2f\n", (a.valor * a.quantidade));

    //Quastão 2
    int numero;
    printf("\nInsira um numero maximo para o somatorio: ");
    scanf("%d", &numero);
    printf("\n%d", SOMATORIO(numero));

    //Questão 3
    int num;
    printf("\nDigite um numero: ");
    scanf("%d", &num);
    printf("\n%d", MULT(num));

    //Questão 4
    int numeros[3], i;
    for(i = 0; i < 4; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &numeros[i]);
    }
    for(i = 0; i < 4; i++){
        printf("%d ", numeros[i]);
    }
}