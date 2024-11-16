#include <stdio.h>
#include <stdlib.h>

int main(){     //Para funcionar coloque todo o diretorio
   char url[] = "G:\\Meu Drive\\2024\\2024.2\\APII\\codes\\notas.txt";
   float n1, n2, n3, media = 0;
   FILE *arq;
   arq = fopen(url, "w");
   if (arq == NULL){
        printf("\nErro, nao abriu.");
   }else{
        printf("\nAbriu certo.");

        printf("\nNota de matematica: ");
        scanf("%f", &n1);
        fprintf(arq, "Matematica: %.2f\n", n1);

        printf("\nNota de fisica: ");
        scanf("%f", &n2);
        fprintf(arq, "Fisica: %.2f\n", n2);

        printf("\nNota de quimica: ");
        scanf("%f", &n3);
        fprintf(arq, "Quimica: %.2f\n", n3);

        media = (n1 + n2 + n3)/3;
        fprintf(arq, "Media final: %.2f\n", media);
    }
    int resposta = fclose(arq);
    if(resposta == 0){
        printf("\nFechou certo.");
    }else{
        printf("\nErro ao fechar");
    }
   return 0;
}