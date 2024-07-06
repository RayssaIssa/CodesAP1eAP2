/*Implementar um programa que leia uma string do usuário e execute as seguintes tarefas:
- Inverter a ordem dos caracteres da string.
- Verificar se a string é um palíndromo (uma palavra, frase, número ou outra sequência de caracteres 
que lê da mesma forma tanto da esquerda para a direita quanto da direita para a esquerda).*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char stri[81];
    printf("\nDigite uma string: ");
    gets(stri);
    int i, tam = strlen(stri);
    bool palindromo;

    for(i = 0; i < tam / 2; i++){
        if(stri[i] != stri[tam - i - 1]){
            palindromo = false;
        }else{
            palindromo = true;
        }
    }
    if (palindromo == true) {
        printf("\nA string '%s' e um palindromo.\n", stri);
    } else {
        printf("\nA string '%s' nao e um palindromo.\n", stri);
    }

    for(i = 0; i < tam / 2; i++){
        char cont = stri[i];
        stri[i] = stri[tam - i - 1];
        stri[tam - i - 1] = cont;
    }
    printf("\nA string invertida e: '%s'\n", stri);

    return 0;
}