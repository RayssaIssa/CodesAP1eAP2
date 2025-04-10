/*Crie uma estrutura "Pessoa" com os campos nome, idade e endereço (com os campos rua, número 
e cidade). Em seguida, declare um ponteiro para uma variável do tipo Pessoa e imprima os dados da 
pessoa na tela.*/
#include <stdio.h>
#include <string.h>
struct PESSOA{
    char nome[20];
    int idade;
    struct ENDERECO{
        char rua[100];
        int numero;
        char cidade[100];
    }end;
}pessoa;
int main()
{
    struct PESSOA pessoa;
    strcpy(pessoa.nome, "João");
    pessoa.idade = 30;
    strcpy(pessoa.end.rua, "Rua das Flores");
    pessoa.end.numero = 123;
    strcpy(pessoa.end.cidade, "São Paulo");
    
    struct PESSOA *ptrP = &pessoa;
    
    printf("\nDados Pessoais\nNome: %s\nIdade: %d", ptrP->nome, ptrP->idade);
    printf("\n\nEndereço\nRua: %s\nNumero: %d\nCidade: %s", ptrP->end.rua, 
    ptrP->end.numero, ptrP->end.cidade);
    return 0;
}