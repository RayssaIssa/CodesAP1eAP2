#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\nCalculo de Desconto\n");
    printf("\nCupons de desconto disponiveis: ");
    printf("\nA = 10");
    printf("\nB = 20");
    printf("\nC = 30");
    printf("\nD = 40");
    printf("\nE = 50\n");

    //Letra a:
    int valorI;
    printf("\nPor favor, digite o valor total da compra: ");
    scanf("%i", &valorI);
    if (valorI > 0){
        printf("\nValor valido.\n");
    }else{
        printf("Valor invalido!");
        exit(1);
    }
    
    //Letra b, c e d:
    char cupom;
    float desconto;
    float valorDesconto;
    float ValorF;
    printf("\nInsira o seu cupom de desconto: ");
    setbuf(stdin, NULL);
    scanf("%c", &cupom);
    switch (cupom){
    case 'A':
        printf("\nSeu cupom A possui 10%% de desconto\n");
        desconto = 10.0;
        valorDesconto = (valorI * desconto)/100;
        ValorF = valorI - valorDesconto;
        break;
    case 'B':
        printf("\nSeu cupom B possui 20%% de desconto\n");
        desconto = 20.0;
        valorDesconto = (valorI * desconto)/100;
        ValorF = valorI - valorDesconto;
        break;
    case 'C':
        printf("\nSeu cupom C possui 30%% de desconto\n");
        desconto = 30.0;
        valorDesconto = (valorI * desconto)/100;
        ValorF = valorI - valorDesconto;
        break;
    case 'D':
        printf("\nSeu cupom D possui 40%% de desconto\n");
        desconto = 40.0;
        valorDesconto = (valorI * desconto)/100;
        ValorF = valorI - valorDesconto;
        break;
    case 'E':
        printf("\nSeu cupom E possui 50%% de desconto\n");
        desconto = 50.0;
        valorDesconto = (valorI * desconto)/100;
        ValorF = valorI - valorDesconto;
        break;
    default:
        printf("\nCupom invalido!\n\n");        
        exit(1);
    }

    //Letra E:
    printf("\nNota Fiscal\n");
    printf("\nValor da compra sem desconto: R$%i,00\n", valorI);
    printf("\nCupom escolhido: %c com %.0f%% de desconto\n", cupom, desconto);
    printf("\nValor do desconto: R$%.2f\n", valorDesconto);
    printf("\nValor final da compra: R$%.2f\n\n",ValorF);

    return 0;
}