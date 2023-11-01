//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Construya un programa para generar los n primeros términos de la serie de Fibonacci (desde el valor 0)//
//////y su respectiva suma, donde n, pertenece a los enteros positivos y es ingresado por el usuario./////
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Se trata de una secuencia infinita de números naturales; a partir del 0 y el 1, se van sumando a pares, de manera que cada número es
igual a la suma de sus dos anteriores, de manera que: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55…*/

int main(int argc, char const *argv[])
{
    int num1;
    int num2 = 0;
    int num3 = 1;
    int num4 = 1;
    int num5 = 2;
    int num6 = 3;
    int num7 = 5;
    int num8 = 8;

    int numfib1= 1;
    int respuesta1;


    // Empiezo con el procedimiento de la serie de Fibonacci, implemento nuevo codigo para la resolucion del mismo//

    printf("Ingrese el numero a calcular: ");
    scanf("%d", num1);

//Avanzo con mas lineas de codigo, trato de realizar el ,programa con la funcion if, de igual manera trato de implementar la funcion do while//
    if (num1=7);
    {
        respuesta1 = num2 + num3;
        printf("El 1er numero de la serie es: %d", &respuesta1);
    }
     if (num1=7);
    {
        respuesta1 = num2 + num3;
        printf("El 1er numero de la serie es: %d", &respuesta1);
    }
    
    return 0;
}