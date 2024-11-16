#ifndef QUATRO_H
#define QUATRO_H

extern float hora;

char* saudacao(){
    if(hora >= 6.01 && hora <= 12){
        return "Bom dia";
    }else if(hora >= 12.01 && hora <= 18){
        return "Boa tarde";
    }else if((hora >= 18.01 && hora <= 23.59) || (hora >= 0 && hora <= 5.59)){
        return "Boa noite";
    }else{
        return "Valor invalido";
    }
}

#endif