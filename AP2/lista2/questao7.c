/*
Usando a estrutura definida no exercício anterior, faça:
a) Declarar uma variável do tipo Ficha de Cliente;
b) Ler os campos da ficha;
c) Escrever os campos da ficha. Observe que o item Índice de Massa Corporal (IMC) precisará 
ser calculado;
d) Ler uma variável denominada id. Depois comparar a variável id ao campo do registro nome;
*/
#include <stdio.h>
#include <stdlib.h>

struct FICHA{
    char nome[200], endereco[200], email[100], sexo, nascimento[100];
    int idade, cpf;
    float altura, peso, imc;
};
int main(){
    struct FICHA fichaCliente;
    char id[100];
    printf("\nNome: ");
    scanf(" %s", fichaCliente.nome);
    printf("\nEnderco: ");
    scanf(" %s", fichaCliente.endereco);
    printf("\nEmail: ");
    scanf(" %s", fichaCliente.email);
    printf("\nSexo (F ou M): ");
    scanf("%c", &fichaCliente.sexo);
    printf("\nNascimento (formato: DD/MM/AAAA): ");
    scanf(" %s", fichaCliente.nascimento);
    printf("\nIdade: ");
    scanf("%d", &fichaCliente.idade);
    printf("\nCPF: ");
    scanf("%d", &fichaCliente.cpf);
    printf("\nAltura: ");
    scanf("%f", &fichaCliente.altura);
    printf("\nPeso: ");
    scanf("%f", &fichaCliente.peso);
    fichaCliente.imc = fichaCliente.peso/(fichaCliente.altura * fichaCliente.altura);

    printf("\nNome: %s \nEnderco: %s \nE-mail: %s \nSexo: %c \nData de nascimento: %s \nIdade: %d \nCPF: %d \nAltura: %.2f \nPeso: %.2f \nIMC: %.1f\n\n", fichaCliente.nome, fichaCliente.endereco, fichaCliente.email, fichaCliente.sexo, fichaCliente.nascimento, fichaCliente.idade, fichaCliente.cpf, fichaCliente.altura, fichaCliente.peso, fichaCliente.imc);

    printf("\nInsira o seu ID: ");
    scanf(" %s", id);
    if (id == fichaCliente.nome){
        printf("\nSeu ID corresponde!\n\n");
    }else{
        printf("\nSeu ID nao corresponde!\n\n");
    }
    return 0;
}