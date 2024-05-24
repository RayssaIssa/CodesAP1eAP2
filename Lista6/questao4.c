/*Escreva um programa que recebe o horário atual em horas (0-23) e exibe uma saudação apropriada com base no 
horário. Por exemplo:
- Se o horário for entre 0 e 11, exiba a mensagem "Bom dia!"
- Se for entre 12 e 17, exiba a mensagem "Boa tarde!"
- Caso contrário, exiba a mensagem "Boa noite!".
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int horas;
    printf("Insira o horario atual em horas (0-23): ");
    scanf("%i", &horas);

    if(horas >= 0 && horas <= 11){
        printf("Bom dia!");
    }else if(horas >= 12 && horas <= 17){
        printf("Boa tarde!");
    }else{
        printf("Boa noite!");
    }
    return 0;
}