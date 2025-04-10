
float CALCULO_TAXAS(int horas){
    float taxa;
    if(horas <= 3){
        taxa = 20;
    }else{
        int sobra = horas - 3;
        taxa = 20 + (sobra * 5);
        if(taxa > 50){
            taxa = 50;
        }
    }
    return taxa;
}
