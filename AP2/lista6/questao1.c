/* Crie um programa para testar as funções a seguir:
• Uma função que receba dois números a e b, em seguida, faça a troca destes dois números. Dica: a e b devem ser passados por referência.
• Uma função que receba dois números a e b, em seguida, decremente o primeiro e incremente o segundo. Dica: a e b devem ser passados por referência.
• Uma função que receba o raio, perímetro e área de um círculo. Em seguida, calcule e retorne nas variáveis perímetro e área o respectivo perímetro e área do círculo. Dica: perímetro e área devem ser passados por referência.
• Uma função que receba o lado, perímetro e área de um quadrado. Em seguida, calcule e retorne nas variáveis perímetro e área o respectivo perímetro e área do quadrado. Dica: perímetro e área devem ser passados por referência.
*/
#include <stdio.h>
int troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}
int altera(int *x, int *y){
    *x = *x - 1;
    *y = *y + 1;
}
float perimetroCirculo(float *raio, float *perimetro){
    *perimetro = 2 * 3.14 * (*raio);
}
float areaCirculo(float *raio, float *area){
    *area = 3.14 * ((*raio) * (*raio));
}
float perimetroQuadrado(float *lado, float *perimetro){
    *perimetro = 4 * (*lado);
}
float areaQuadrado(float *lado, float *area){
    *area = (*lado) * (*lado);
}
int main(){
    //Item 1
    int a, b;
    printf("\nInsira dois valores: ");
    scanf("%d %d", &a, &b);
    troca(&a, &b); //realiza a troca
    printf("\nOs valores trocados sao: %d e %d\n", a, b);

    //Item 2
    int x, y;
    printf("\nInsira dois valores: ");
    scanf("%d %d", &x, &b);
    altera(&x, &y); //realiza a decrementação e incrementação
    printf("\nOs valores decrementado e incrementado sao: %d e %d\n", x, y);

    //Item 3
    float raio, areaC, perimetroC;
    printf("\nInsira o raio: ");
    scanf("%f", &raio);
    perimetroCirculo(&raio, &perimetroC); //calcula o perimetro
    areaCirculo(&raio, &areaC); //calcula a area
    printf("\nA area e: %.1f e o perimetro e: %.1f\n", areaC, perimetroC);

    //Item 4
    float lado, areaQ, perimetroQ;
    printf("\nInsira o lado: ");
    scanf("%f", &lado);
    perimetroQuadrado(&lado, &perimetroQ); //calcula o perimetro
    areaQuadrado(&lado, &areaQ); //calcula a area
    printf("\nA area e: %.1f e o perimetro e: %.1f\n", areaQ, perimetroQ);

    return 0;
}