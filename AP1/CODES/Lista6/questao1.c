/*Escreva um programa que recebe um caractere que representa uma operação matemática (+, -, *, /) 
e dois números reais. O programa deve realizar a operação selecionada e exibir o resultado. 
Por exemplo, se o usuário digitar "+", 5 e 3, o programa deve exibir o resultado 8. 
Utilize estrutura switch case.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    char oper;
    float num1;
    float num2;
    float op;
    
    printf("\nVamos realizar uma operacao matematica.\n");

    printf("\nDigite * se a operacao for multiplicacao ou, digite / se a operacao for divisao ou, digite + se a operacao for soma ou digite - se a operacao for subtracao: ");
    scanf("%c", &oper);
    setbuf(stdin, NULL);

    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);
    setbuf(stdin, NULL);

    printf("\nDigite o segundo numero: ");
    scanf("%f", &num2);
    setbuf(stdin, NULL);

    switch(oper){
        case '+':
            op = num1 + num2;
            printf("\nResultado da operacao: %0.1f + %0.1f = %0.1f", num1, num2, op);
            break;
        case '-':
            op = num1 - num2;
            printf("\nResultado da operacao: %0.1f - %0.1f = %0.1f", num1, num2, op);
            break;
        case '/':
            op = num1 / num2;
            printf("\nResultado da operacao: %0.1f / %0.1f = %0.1f", num1, num2, op);
            break;
        case '*':
            op = num1 * num2;
            printf("\nResultado da operacao: %0.1f * %0.1f = %0.1f", num1, num2, op);
            break;
        default:
            printf("Valor invalido");
        }
    return 0;
}