#include<stdio.h>
#include<math.h>

float elevarAlCuadrado(float numero);

void elevarAlCuadrado2(float *numero);

void Invertir(int *a,int *b);

void orden(int *a,int *b);


int main(){
   float num1,num2;
   int variable, a, b;
   printf("ingrese un numero: \n");
   scanf("%f",&num1);
   printf("su cuadrado es %.2f\n", elevarAlCuadrado(num1));

   printf("ingrese un numero: \n");
   scanf("%f",&num2);
   elevarAlCuadrado2(&num2);
   printf("su cuadrado es %.2f\n", num2);

    printf("ingrese un valor entero: \n");
    scanf("%d", &variable);
    printf("la direccion de memoria de la varia es %p\n", &variable);
    printf("el contenido de la variable es: %d\n", variable);

    printf("Ingrese un par de valores enteros\nIngrese a:");
    scanf("%d", &a);
    printf("Ingrese b:");
    scanf("%d", &b);

    Invertir(&a,&b);
    printf("invirtiendo...\n");

    printf("el valor de a es: %d\n", a);
    printf("el valor de b es: %d\n", b);


    printf("Ingrese un par de valores enteros\nIngrese a:");
    scanf("%d", &a);
    printf("Ingrese b:");
    scanf("%d", &b);

    orden(&a,&b);
    printf("ordenando...\n");

    printf("el valor de a es: %d\n", a);
    printf("el valor de b es: %d\n", b);

   return 0;
}

float elevarAlCuadrado(float numero){
   float resultado;
   resultado = pow(numero,2);
   return resultado;
}

void elevarAlCuadrado2(float *numero){
   *numero = pow(*numero,2);
}

void Invertir(int *a,int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a,int *b){
    int aux;
    if (*b > *a)
    {
        aux = *b;
        *b = *a;
        *a = aux;
    }
    
}


