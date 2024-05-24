/*Utilize o calculo do IMC feito na lista 03, mas agora verifique se a pessoa está no peso ideal.
Parâmetros:
IMC < 18,5 Classificação: MAGREZA
18,5 <= IMC <=  24,9  Classificação:   NORMAL
25,0 <= IMC <=  29,9  Classificação:   SOBREPESO 
30,0  <= IMC <=  39,9   Classificação:  OBESIDADE
IMC > 40,0  Classificação:  OBESIDADE GRAVE*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    float imc;
    printf("Insira seu IMC: ");
    scanf("%f", &imc);

    if(imc < 18.5){
        printf("Sua classificacao e: MAGREZA");
    }else if(18.5 <= imc && imc <= 24.9){
        printf("Sua classificacao e: NORMAL");
    }else if(25.0 <= imc && imc <= 29.9){
        printf("Sua classificacao e: SOBREPESO");
    }else if(30.0 <= imc && imc <= 39.9){
        printf("Sua classificacao e: OBESIDADE");
    }else if(imc >= 40.0){
        printf("Sua classificacao e: OBESIDADE GRAVE");
    }
    return 0;
}