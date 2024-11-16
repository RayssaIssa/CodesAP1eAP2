
int FATORIAL(int x){
    int i, fatorial = 1;
    for(i = 1; i <= x; i++){
        fatorial *= i;
    }
    return fatorial;
}

int COMBINA(int quant, int part){
    int num = FATORIAL(quant) / (FATORIAL(part) * FATORIAL(quant - part));
    return num;
}
