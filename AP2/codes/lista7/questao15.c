/*Crie uma estrutura "Ponto" com os campos x e y. Em seguida, declare uma função que receba um 
ponteiro para a variável do tipo Ponto e calcule a distância do ponto até a origem (0,0). Retorne o valor 
calculado*/
#include <stdio.h>
#include <math.h>
struct PONTO {
    float x;
    float y;
};

float distanciaAteOrigem(struct PONTO *ponto) {
    return sqrt(ponto->x * ponto->x + ponto->y * ponto->y);
}

int main() {
    struct PONTO p;
    printf("Digite as coordenadas do ponto (x, y): ");
    scanf("%f %f", &p.x, &p.y);

    float distancia = distanciaAteOrigem(&p);
    printf("A distancia do ponto ate a origem e: %.2f\n", distancia);

    return 0;
}