#include <stdio.h>

int cuadroNumero(int x){
    return x*x;
}

void cuadro(int x){
    printf("\n%d", x*x);
}

void mostrarValorYcontenido(int x){
    printf("\nel valor es: %d", x);
    printf("\nla direccion de memoria es: %d", &x);
}

void invertir(int a, int b){
    int aux;
    aux=a;
    a=b;
    b=aux;
    printf("\na invertido es: %d", a);
    printf("\nb invertido es: %d", b);
}

void ordenar(int a, int b){
    if (a>b)
    {
        printf("\na: %d", a);
        printf("\nb: %d", b);
    } else
    {
        int aux;
        aux=a;
        a=b;
        b=aux;
        printf("\na: %d", a);
        printf("\nb: %d", b);
    }
}

