#include <stdio.h>
int main(){
    //Verificando tamanho de memoria dos dados
    int a;
    char b;
    float c;
    double d;
    printf("\nTamanho de int: %d", sizeof(a));    
    printf("\nTamanho de char: %d", sizeof(b));    
    printf("\nTamanho de float: %d", sizeof(c));    
    printf("\nTamanho de double: %d", sizeof(d));

    //Ponteiro com vetor
    int *ptr, v[3] = {10, 20, 30};
    ptr = v;
    printf("\nValor do ponteiro: %d, %d, %d", *ptr, *(ptr+1), *ptr+2);

    //Ponteiro em char
    char string[10], *ptrString = string;
    printf("\nDigite uma string: ");
    gets(string);
    
    if(*ptrString == '\0') return;
        printf("\nOrdem direta\n");
    while(*ptrString != '\0'){
        putchar(*ptrString++);
    }
    
    printf("\nOrdem Inversa\n");
    *ptrString--;
    while(ptrString >= &string){
        putchar(*ptrString--);
    }
    
    //Ponteiro para ponteiro
    int x=5; 
    int *ptr_x; 
    int **ptr_ptr_x; 
    ptr_x = &x; 
    ptr_ptr_x = &ptr_x; 
    printf("\nx = %d - &x = %ld", x, &x); 
    printf("\nx = %d - &x = %ld", *ptr_x, ptr_x); 
    printf("\nx = %d - &x = %ld", **ptr_ptr_x, *ptr_ptr_x);

    return 0;
}