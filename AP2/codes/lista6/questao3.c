/*(Elabore um arquivo com extensão .h) Escreva uma função que receba uma string por referência. A função deve converter todos os caracteres da string para letras maiúsculas.*/
#include <stdio.h>
#include <ctype.h>
char transformar(char *string, int tamanho){
    int i;
    for(i = 0; i < tamanho; i++)
        string[i] = toupper(string[i]);
}
void main(){
    char string[50];
    printf("\nInsira uma string: ");
    scanf(" %s", string);
    transformar(&string, 50);
    printf("\n%s", string);
}