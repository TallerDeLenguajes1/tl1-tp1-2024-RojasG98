#include<stdio.h>
#include<math.h>

float elevarAlCuadrado(float numero);

void elevarAlCuadrado2(float *numero);


int main(){
   float num1,num2;
   printf("ingrese un numero: \n");
   scanf("%f",&num1);
   printf("su cuadrado es %.2f\n", elevarAlCuadrado(num1));

   printf("ingrese un numero: \n");
   scanf("%f",&num2);
   elevarAlCuadrado2(&num2);
   printf("su cuadrado es %.2f\n", num2);

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


