/*
Usando o conceito de estrutura dentro de estrutura, crie duas estruturas que permitem manipular 
os seguintes dados:
a) Declare e faça a carga automática das variáveis;
b) Atualize os valores das variáveis utilizando o comando de atribuição ou strcpy (para o caso 
de string);
c) Escreva na tela os valores dos campos do registro;
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct DADOS{
    char rua[100];
    int numero;
    int cep;
};
struct INFOS{
    char nome[100];
    struct DADOS dados;
    float saldo;
}a;

int main(){
    strcpy(a.nome, "Issa");
    strcpy(a.dados.rua, "Rua das Flores");
    a.dados.numero = 123;
    a.dados.cep = 75800000;
    a.saldo = 1500.75;

    strcpy(a.nome, "Tete");
    strcpy(a.dados.rua, "Avenida Central");
    a.dados.numero = 456;
    a.dados.cep = 75801000;
    a.saldo = 2000.50;

    printf("\nNome: %s", a.nome);
    printf("\nRua: %s", a.dados.rua);
    printf("\nNumero: %d", a.dados.numero);
    printf("\nCEP: %d", a.dados.cep);
    printf("\nSaldo: %.2f", a.saldo);

    return 0;
}
