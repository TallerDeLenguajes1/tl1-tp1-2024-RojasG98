#include <stdio.h>

int main(){
    printf("hola mundo");
    int numero = 59;
    int *punt;
    punt = &numero;
    printf("\nel contenido del puntero es %d", *punt);
    printf("\nLa dirección de memoria almacenada por el puntero: %p", punt);
    printf("\nla dirección de memoria de la variable: %p", &numero);
    printf("\nla dirección de memoria del puntero %p", &punt);
    printf("\nel tamaño de memoria utilizado por la variable %d bytes", sizeof(*punt));
    return 0;
}