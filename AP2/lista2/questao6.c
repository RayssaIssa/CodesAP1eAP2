/*
Declarar o registro Ficha de Cliente que tem a seguinte forma:
Ficha de Cliente
Nome: 
Endereço:
E-mail: 
Idade: 
CPF: 
Sexo:
Data de nascimento: 
Altura: 
Peso: 
IMC*:*a ser calculado
*/
#include <stdio.h>
#include <stdlib.h>

struct FICHA{
    char nome[200], endereco[200], email[100], sexo, nascimento[100];
    int idade, cpf;
    float altura, peso, imc;
};
