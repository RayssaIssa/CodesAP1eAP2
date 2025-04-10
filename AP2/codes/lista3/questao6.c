/*
Crie uma biblioteca “*.h” que manipulando uma variável global hora, contenha um módulo int 
saudacao( ), que se o horário digitado estiver entre 6h01-12h irá imprimir “Bom dia”, se o horário 
digitado estiver entre 12h01 e 18h irá imprimir “Boa tarde”, se o horário digitado estiver entre 
18h01 e 5h59 irá imprimir “Boa noite”. Se o valor for inválido, digitar: “Valor inválido”. No 
programa principal irá ler a variável e irá chamar o módulo saudacao( ).
*/
#include <stdio.h>
float hora;
#include "seis.h"
void main(){
    printf("\nInsira a hora atual (Exemplo de formato: 6.05):");
    scanf("%f", &hora);

    printf("\n%s\n", saudacao());
}