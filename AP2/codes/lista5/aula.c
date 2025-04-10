#include <stdio.h>
#include <stdlib.h>

int FUNCAO(int x){
    if(x == 1){
        return 1;
    }else{
        return (10 * FUNCAO(x-1) + 2);
    }
}

int FATORIAL(int n){
    if(n==1){
        return 1;
    }else{
        return n * FATORIAL(n-1);
    }
}

int main(){
    int x = 5;
    printf("%d", FUNCAO(x));

    int n = 5;
    printf("\n%d", FATORIAL(n));
}