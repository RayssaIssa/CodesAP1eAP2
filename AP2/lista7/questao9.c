/*Escreva um módulo em C que, usando variáveis locais, declare uma string e um ponteiro para essa 
variável. Usando ponteiro, altere a string para sua versão em letras maiúsculas.*/
#include <stdio.h>
#include <ctype.h>
void maiusculas(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}
int main() {
    char texto[100];
    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);
    maiusculas(texto);
    printf("Texto em maiúsculas: %s\n", texto);

    return 0;
}