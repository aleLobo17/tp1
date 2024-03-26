#include <stdio.h>

int main(){
    printf("hola mundo");
    int a=3;
    int *b = &a;
    printf("\nla direccion de memoria almacenada por el puntero es: %d", b);
    printf("\nel valor del puntero es: %d", *b);
    printf("\nla direccion de memoria del puntero es: %d", &b);
    printf("\nel valor del puntero es: %d", *b);
    return 0;
}