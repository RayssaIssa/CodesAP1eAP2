#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int questao;
    menu();
    printf("Digite o numero da questao: ");
    scanf("%i", &questao);
    getchar();

    do{
        menu();
        printf("Digite o numero da questao: ");
        scanf("%i", &questao);
        getchar();

        switch (questao){
        case 1: 
            printf("\nDigite o tempo em horas: ");
            int horas, segundos;
            scanf("%i", &horas);
            segundos = horas * 3600;
            printf("\nO tempo em segundos e: %i", segundos);

            printf("\n\n");
            break;
        case 2: 
            printf("Digite tres numeros inteiros:\n");
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            int MenorAB = (a + b + abs (a - b))/2;
            if (MenorAB < c){
                printf("%i e menor.", MenorAB);
            }else{
                printf("%i e menor.", c);
            }

            printf("\n\n");
            break;
        case 3: 
            printf("\nInsira sua idade: ");
            int idade, hora;
            scanf("%i", &idade);
            printf("\nInsira suas horas de estudo semanal: ");
            scanf("%i", &hora);

            if(hora < 5){
                printf("\nVoce e um Estudante desmotivado.");
            }else if(idade < 18 && hora <= 15){
                printf("\nVoce e um Estudante Jovem.");
            }else if(idade >= 18 && idade < 25 && hora <= 10){
                printf("\nVoce e um Estudante Adulto.");
            }else if(idade >= 25 && hora < 10){
                printf("\nVoce e um Estudante Senior.");
            }else{
                printf("\nVoce nao esta categorizado.");
            }

            printf("\n\n");
            break;
        case 4: 
            printf("\nVerificacao de numero primo");
            int numero, z, verificar;
            long long fatorial = 1;
            
            do{
                printf("\nInsira um numero INTEIRO e POSITIVO: ");
                verificar = scanf("%i", &numero);
                
                if (verificar != 1) {
                    printf("Entrada invalida! Por favor, insira um numero INTEIRO.\n");
                    while (getchar() != '\n'); 
                } else if (numero < 0) {
                    printf("Numero invalido! Por favor, insira um numero POSITIVO.\n");
                }
            }while(verificar != 1 || numero < 0);
            
            for(z = 1; z <= numero; z++){
                fatorial*= z;
            }
            printf("\n O fatorial de %i e: %lld", numero, fatorial);

            printf("\n\n");
            break;
        case 5: 
            printf("\nInsira um numero: ");
            int num, prox, n1 = 0, n2 = 1;
            scanf("%d", &num);
            printf("\nEssa e a sequecia de Fibonacci ate %d:", num);
            prox = n1;
            while(prox <= num){
                printf("%d, ", prox);
                prox = n1 + n2;
                n1 = n2;
                n2 = prox;
            }

            printf("\n\n");
            break;
        case 6: 
            printf("\nVetor 0 e 1");
            int vetor[10], y, u, f;
            for (y = 0; y < 10; y++) {
                bool primo = true; 
                if (y <= 1) {
                    primo = false;
                } else {
                    for (u = 2; u * u <= y; u++) {
                        if (y % u == 0) {
                            primo = false; 
                            break; 
                        }
                    }
                }
                if(primo){
                    vetor[y] = 1;
                } else{
                    vetor[y] = 0;
                }
            }
            printf("\nO vetor e: ");
            for (f = 0; f < 10; f++) {
                printf("%d ", vetor[f]);
            }

            printf("\n\n");
            break;
        case 7: 
            printf("\nDigite uma string: ");
            char stri[81];
            fgets(stri, sizeof(stri), stdin);
            stri[strcspn(stri, "\n")] = '\0';
            
            int i, tam = strlen(stri);
            bool palindromo = true;
            
            for(i = 0; i < tam / 2; i++){
                if(stri[i] != stri[tam - i - 1]){
                    palindromo = false;
                    break;
                }
            }
            
            if (palindromo == true) {
                printf("\nA string '%s' e um palindromo.\n", stri);
            } else {
                printf("\nA string '%s' nao e um palindromo.\n", stri);
            }

            printf("\n\n");
            break;
        case 0: 
            printf("\nOperacao encerrada.\n\n");
            break;
        default:
            printf("Por favor, digite um numero valido!");
            break;
        }
    }while(questao != 0);
    printf("\n\n");

    return 0;
}

int menu(){
    printf("\nVeja as questoes abaixo e escolha uma ou digite 0 para sair:\n");
    printf("\n 1 - Conversao de tempo\n 2 - Transcricao do fluxograma\n 3 - Categoria de alunos\n 4 - Fatorial\n 5 - Fibonacci\n 6 - Numero primo\n 7 - Palindromo\n\n");
    return 0;
}