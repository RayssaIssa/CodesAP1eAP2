/*Faça um programa que renomeie o arquivo criado no exercício 1, para matriculados.txt”. */
#include <stdio.h>
#include <stdlib.h>
int main(){
    char *antigoArq = "G:\\Meu Drive\\2024\\2024.2\\APII\\codes\\lista8\\dados.txt";
    char *novoArq = "G:\\Meu Drive\\2024\\2024.2\\APII\\codes\\lista8\\matriculados.txt";

    if(rename(antigoArq, novoArq) == 0){
        printf("\nSucesso.");
    }else{
        printf("\nErro.");
    }   
    return 0;
}