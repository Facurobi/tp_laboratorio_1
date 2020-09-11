// Aca expresamos el desarrollo de las funciones utilizadas en Funciones.h

#include "Funciones.h"

/*  Esta funcion suma los dos enteros ingresados y devuelve el resultado
 *
 * int a recibe un numero entero para sumar
 *
 * int b recibe un numero entero para sumar
 *
 * return devuelve el resultado de la suma de los dos numeros enteros
 *
 */

int suma (int a, int b)

{
    int resultado;
    resultado = a + b;
    return resultado;
}

/*  Esta funcion resta los dos enteros ingresados y devuelve el resultado
 *
 * int a recibe un numero para restar
 *
 * int b recibe un numero para restar
 *
 * return devuelve el resultado de la resta de los dos numeros enteros
 *
 */

 int resta (int a, int b)

{
    int resultado;
    resultado  = a - b;
    return resultado;
}

/*  Esta funcion multiplica los dos enteros ingresados y devuelve el resultado
 *
 * int a recibe un numero para multiplicar
 *
 * int b recibe un numero para multiplicar
 *
 * return devuelve el resultado de la multiplicacion de los dos numeros enteros
 *
 */

 int multiplicacion (int a, int b)

{
    int  resultado;
    resultado  = a * b;
    return resultado;
}

/* Esta funcion divide los dos enteros ingresados y devuelve el resultado
 *
 * int a recibe un numero para dividir
 *
 * int b recibe un numero para dividir
 *
 * return devuelve un numero en float
 *
 */

float division (int a, int b)

{
    float  resultado;
    resultado  =  (float) a / b;
    return resultado;
}

/* Esta funcion realiza el factorial del entero ingresado y devuelve el resultado
 *
 * int a recibe un numero entero
 *
 * int devuelve un numero entero
 *
 */

int factorial(int a)
{

    int resultado;

    if (a == 0)
    {
        resultado = 1;
    }

    else
    {
        resultado = a* factorial(a-1);
    }
    return resultado;
}



