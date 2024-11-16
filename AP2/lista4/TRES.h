typedef struct{
    int horas, minutos, segundo;
}TEMPO;

TEMPO conversor_De_Tempo(int segundos){
    TEMPO tempo;
    tempo.horas = segundos / 3600;
    int resto = segundos % 3600;
    tempo.minutos = resto / 60;
    tempo.segundo = resto % 60;
    return tempo;
}
