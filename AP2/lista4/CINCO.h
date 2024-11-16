
int TRIANGULO(int x, int y, int z){
    int eh, tipo;
    if((x + y) > z && (x + z) > y && (y + z) > x){
        eh = 1;
    }else{
        eh = 0;
    }
    if(eh == 1){
        if(x == y && x == z){
            tipo = 1;
        }else if(x == y || x == z){
            tipo = 2;
        }else if(x != y && x != z){
            tipo = 3;
        }
    }else{
        tipo = 0;
    }
    return tipo;
}
