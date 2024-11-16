/*1- Faça um programa usando o do-while + switch-case para criar um menu com as questões da lista:
a) Escreva um programa que leia 5 números inteiros e imprima apenas os números pares. Use o laço for.
b) Escreva um programa que leia 5 números inteiros e imprima o maior e o menor número digitado. Use o laço for.
c) Escreva um programa que leia um número do usuário e imprima a tabuada desse número. Use o laço for.
Para o menu você pode optar por usar char ou int.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    char letra;
    do{
        printf("\n\nEscolha a tarefa que voce quer executar e insira a letra (A, B ou C):\n");
        printf("\nLetra A: Ler 5 numeros e selecionar os pares.\n");
        printf("Letra B: Ler 5 numeros e mostrar o maior e menor.\n");
        printf("Letra C: Ler um numero e mostrar sua tabuada.\n");
        scanf(" %c", &letra);
        setbuf(stdin, NULL);

        switch (letra){
        case 'A':
            printf("\nLetra A\n");
            printf("\nNumeros pares\n");
            printf("\nInsira cinco numeros inteiros, separe cada um com Enter.\n");

            int u, p, numer[5], quant = 0, pares[5];
            for(p = 0; p < 5; p++){
                scanf("%d", &numer[p]);
            }            
            for(u = 0; u < 5; u++){
                if(numer[u] % 2 == 0){
                    pares[quant] = numer[u];
                    quant++;
                }
            }
            if (quant > 0){
                printf("\nSao pares: ");
                for (u = 0; u < quant; u++) {
                    printf("%d ", pares[u]);
                }
            }else{
                printf("\nNao ha nenhum numero par.\n");
            }            
            break;
        
        case 'B':
            printf("\nLetra B\n");
            printf("\nMaior e menor\n");
            printf("\nInsira cinco numeros inteiros, separe cada um com Enter. \n");

            int z, o, num[5];
            for(o = 0; o < 5; o++){
                scanf("%d", &num[o]);
            }

            int maior, menor;
            maior = num[0];
            menor = num[0];    

            for (z = 1; z < 5; z++) {
                if (num[z] > maior) {
                    maior = num[z];
                }
                if (num[z] < menor) {
                    menor = num[z];
                }
            }
            printf("O maior numero e %d e o menor e %d\n", maior, menor);
            break;

        case 'C':
            printf("\nLetra C\n");
            printf("\nTabuada\n");
            printf("\nInsira um numero para verificar suas tabuadas: ");

            int numero, i;
            scanf("%d", &numero);

            printf("\nTabuada de Multiplicacao\n");
            for (i = 0; i <= 10; i++){
                float mult = numero * i;
                printf("%d x %d = %.0f\n", numero, i, mult);
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