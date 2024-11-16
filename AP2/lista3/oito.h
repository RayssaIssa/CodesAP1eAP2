#ifndef OITO_H
#define OITO_H

extern float n1, n2, n3;
extern char tipoMedia;
extern int p1, p2, p3;

float media(){
    float soma = 0;
    if(tipoMedia == 'P'){
        soma = (n1 * p1 + n2 * p2 + n3 * p3)/(p1 + p2 + p3);
        return soma;
    }else if(tipoMedia == 'A'){
        soma = n1 + n2 + n3;
        return soma/3;
    }
}

#endif