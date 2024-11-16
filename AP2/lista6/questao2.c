/*(Elabore um arquivo com extensão .h) Faça uma função void Criptografia (char *p, char v, int tam), que receba uma string, um caractere e o tamanho da string. A função deve criptografar uma frase, 
trocando todas as vogais pelo caractere passado por parâmetro. Imprimir a nova string no programa principal. Exemplo:
Entrada: Eu vou ao clube.
Saída: ** v** ** cl*b*
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void Criptografia(char *p, char v, int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(tolower(p[i]) == 'a' || tolower(p[i]) == 'e' || tolower(p[i]) == 'i' || tolower(p[i]) == 'o' || tolower(p[i]) == 'u'){ 
            p[i] = v;
        }
    }
}
void main(){
    char caracter;
    int tamanho;
    char frase[100];

    printf("\nDigite o caracter para substituir as vogais: ");
    scanf("%c", &caracter);
    getchar();

    printf("\nDigite uma frase para criptografar: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';
    tamanho = strlen(frase);

    Criptografia(frase, caracter, tamanho);
    printf("%s", frase);
}