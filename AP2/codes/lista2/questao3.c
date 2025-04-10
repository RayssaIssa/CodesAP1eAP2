/*
Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo: 
• Horário: composto de hora, minutos e segundos. 
• Data: composto de dia, mês e ano. 
• Agenda: composto de uma data, horário e texto que descreve o compromisso.
Crie um menu iterativo para:
1 - Preencha os campos da struct
2 - Imprima os campos da struct
3 – Sair
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct HORARIO{
    int hora, minuto, segundos;
};
struct DATA{
    int dia, ano, mes;
};
struct AGENDA{
    struct DATA data;
    struct HORARIO horario;
    char descricao[500];
}a;

int main(){
    int questao;
    printf("\n1 - Preencher os campos da Struct.\n2 - Imprima os campos da Struct.\n3 - Sair.");
    printf("\nInsira a questao que deseja selecionar: ");
    scanf("%d", &questao);
    do{
        printf("\n1 - Preencher os campos da Struct.\n2 - Imprima os campos da Struct.\n3 - Sair.\n");
        printf("\nInsira a questao que deseja selecionar: ");
        scanf("%d", &questao);
        getchar();

        switch (questao){
        case 1:
            printf("\nAgenda\n");
            printf("\nDigite o horario (Formato: hora minuto segundo): ");
            scanf("%d %d %d", &a.horario.hora, &a.horario.minuto, &a.horario.segundos);

            printf("\nDigite a data (Formato todos numericos: dia mes ano): ");
            scanf("%d %d %d", &a.data.dia, &a.data.mes, &a.data.ano);

            printf("\nDigite a descricao do compromisso: ");
            fflush(stdin);
            scanf("%[^\n]", a.descricao);
            break;
        case 2:
            printf("\nData do compromisso: %d/%d/%d\n", a.data.dia, a.data.mes, a.data.ano);
            printf("\nHorario do compromisso: %d:%d:%d\n", a.horario.hora, a.horario.minuto, a.horario.segundos);
            printf("\nDescricao do compromisso: %s\n", a.descricao);
            break;
        case 3:
            printf("\nOperacao encerrada.\n");
            break;
        default:
            printf("\nErro! Digite uma questao valida.\n");
            break;
        }
    } while (questao != 3);
    return 0;
}