#ifndef QUATRO_H
#define QUATRO_H

extern int n;

int fibonacci(){
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int i, a = 0, b = 1, fibo = 0;

        for (i = 2; i <= n; i++) {
            fibo = a + b;
            a = b; 
            b = fibo; 
        }

        return fibo; 
    }
}

#endif