/*1- Faça um programa usando o do-while + switch-case para criar um menu com as questões da lista:
a) Escreva um programa que leia a idade de um grupo de pessoas e calcule a média de idade. 
O programa deve parar de ler as idades quando for digitada uma idade negativa. Use o laço while.
b) Escreva um programa que leia um número inteiro do usuário e imprima a sequência de Fibonacci até esse número. 
Use o laço while.
c) Escreva um programa que leia um número inteiro do usuário e imprima se o número é primo ou não. Use o laço while.
Para o menu você pode optar por usar char ou int.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    char letra;    
    do{
        printf("\n\nEscolha a tarefa que voce quer executar e insira a letra (A, B ou C):\n");
        printf("\nLetra A: Calcular a media da idade das pessoas.\n");
        printf("Letra B: Sequencia de Fibonacci.\n");
        printf("Letra C: Verificacao de numero primo.\n");
        scanf(" %c", &letra);
        setbuf(stdin, NULL);

        switch (letra){
        case 'A':
            printf("\nLetra A\n");
            printf("\nMedia de idades\n");
            printf("\nInsira um numero negativo para parar.\n");

            int idade = 0, idades = 0, i = 0;
            double media;

            while (1){
                printf("\nDigite a idade: ");
                scanf("%d", &idade);
                if(idade < 0){
                    break;
                }
                idades += idade;
                i++;
            }
            if(i > 0){
                media = (double)idades/i;
                printf("\nA media das idades e: %.1f\n", media);
            }else{
                printf("\nIdade não inserida.\n");
            }
            break;
        
        case 'B':
            printf("\nLetra B\n");
            printf("\nSequencia de Fibonacci\n");

            int num, prox, n1 = 0, n2 = 1;
            printf("\nInsira um numero: ");
            scanf("%d", &num);
            
            printf("\nEssa e a sequecia de Fibonacci ate %d:\n", num);
            prox = n1;
            while(prox <= num){
                printf("%d, ", prox);
                prox = n1 + n2;
                n1 = n2;
                n2 = prox;
            }
            break;

        case 'C':
            printf("\nLetra C\n");
            printf("\nVerificacao de numero primo\n");

            int numP, op = 2, result = 0;
            printf("\nInsira um numero: ");
            scanf("%d", &numP);

            while (op <= numP / 2){
                if(numP % op == 0){
                    result++;
                    break;
                }
                op++;
            }
            if(result == 0 && numP > 1){
                printf("\n%d e primo\n", numP);
            }else{
                printf("\n%d nao e primo\n", numP);
            }
            break;

        case 'N':
            printf("\nOperacao encerrada!\n");
            break;

        default:
            printf("\nLetra invalida, tente novamente!\n");
            break;
        }
    }while(letra != 'N');
    return 0;
}