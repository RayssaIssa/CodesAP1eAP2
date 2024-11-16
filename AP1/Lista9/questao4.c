/*Implementar um programa que leia uma string do usuário e execute as seguintes tarefas:
- Remover os espaços da string. 
- Substituir todas as ocorrências de uma determinada letra por outra '*'.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
    char algo[61], letra;
    int i, cont = 0;
    printf("Digite uma string: ");
    gets(algo);
    printf("\nVoce digitou: %s\n", algo);

    int tam = strlen(algo); 
	printf("%s\n", algo); 
	for (i = 0; i < tam; i++) { 
		if (algo[i] == ' ') continue; 
		algo[cont] = algo[i]; 
		cont++; 
	}
    algo[cont] = '\0';
    printf("\nA string sem os espacos: %s\n", algo);

    printf("\nDigite a letra a ser substituida: ");
    scanf("%c", &letra);

    for (i = 0; i < tam; i++) {
        if (algo[i] == letra) {
            algo[i] = '*';
        }
    }
    printf("\nA string sem a letra '%c' fica: %s\n\n", letra, algo);

    return 0;
}