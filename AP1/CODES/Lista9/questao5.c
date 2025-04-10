/*Implementar um programa que leia uma string do usuário e execute as seguintes tarefas:
- Remover todas as vogais da string.
- Contar o número de vogais na string.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char frase[61];
    printf("Digite uma frase: ");
    gets(frase);
    printf("\nSua frase e: %s", frase);

    frase[strcspn(frase, "\n")] = '\0';
    int tam = strlen(frase), i, z = 0, vogais = 0;

    for (i = 0; i < tam; i++) {
        if (frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U' || frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
            vogais++;
        }
    }
    printf("\n\nA frase tem %d vogais.\n", vogais);

    for (i = 0; i < tam; i++) {
        if (frase[i] != 'A' && frase[i] != 'E' && frase[i] != 'I' && frase[i] != 'O' && frase[i] != 'U' && frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u') {
            frase[z++] = frase[i];
        }
    }
    frase[z] = '\0';
    printf("\nA frase sem as vogais fica: %s\n\n", frase);

    return 0;
}