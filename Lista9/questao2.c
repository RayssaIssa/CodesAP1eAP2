/*Implementar um programa que leia uma frase do usuário e execute as seguintes tarefas:
- Contar o número de palavras na frase.
- Contar o número de caracteres na frase.
- Exibir a frase com todas as palavras em maiúsculas.
- Exibir a frase com todas as palavras em minúsculas.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char frase[61];
    int palavra = 0, i, cont = 0;

    printf("Digite uma frase: ");
    gets(frase);
    printf("\nSua frase e: %s\n", frase);

    printf("\nSua frase tem %i caracteres.\n", strlen(frase));

    for (i = 0; frase[i] != '\0'; i++) {
        if (isspace(frase[i])) {
            palavra = 0;
        } else if (!palavra) {
            palavra = 1;
            cont++;
        }
    }
    if(cont != 0){
        printf("\nSua frase tem %i palavras.\n", cont);
    }
    
    strupr(frase);
    printf("\nSua frase em maisculas: %s\n", frase);

    strlwr(frase);
    printf("\nSua frase em minusculas: %s\n\n", frase);

    return 0;
}
