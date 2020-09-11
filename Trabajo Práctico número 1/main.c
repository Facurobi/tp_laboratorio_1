#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{

   int opcion;
   int flag1 = 0;
   int flag2 = 0;
   int flagresultados;
   int numero1;
   int numero2;
   int totalSuma;
   int totalResta;
   int totalFactorial1;
   int totalFactorial2;
   int totalMultiplicacion;
   float totalDivision;

    do
       {
            printf("\n *Calculadora_UTN* \n");

          if (flag1 == 0)
          {
              printf("1- Ingrese el Primer numero: \n");

          }
          else
          {
              printf("1- Reingrese el Primer Numero el actual es: (x = %d)\n",numero1);
          }
            if (flag2==0)
          {
              printf("2- Ingrese el Segundo numero: \n");

          }
          else
          {
              printf("2- Reingrese el Segundo numero el actual es:(y = %d)\n",numero2);
          }
            printf("3- Calcular todas las operaciones: \n");
            printf("4- Informar resultados: \n");
            printf("5- salir\n");

            printf("\n Usa algun numero del (1 al 5) para seleccionar la opcion: ");
            scanf("%d", &opcion);


       switch(opcion)
                    {case 1:
                        printf("\n Ingrese Primer numero: ");
                        scanf("%d",&numero1);
                        flag1= 1;
                        break;

                    case 2:
                        printf("\n Ingrese Segundo numero: ");
                        scanf("%d",&numero2);
                        flag2= 1;
                        break;
                    case 3: if (flag1 == 1 && flag2 ==1)
                    {
                            printf("\na) Calcular la suma (%d+%d)",numero1,numero2);
                            totalSuma = suma(numero1,numero2);
                            printf("\nb) Calcular la resta (%d-%d)",numero1,numero2);
                            totalResta = resta(numero1,numero2);
                            if (numero2!=0)
                            {
                                printf("\nc) Calcular la division (%d/%d)",numero1,numero2);
                                totalDivision = division(numero1,numero2);
                            }
                            else
                            {
                                printf("\n No se puede dividir por 0 \n");
                            }
                            printf("\nd) Calcular la multiplicacion (%d*%d)",numero1,numero2);
                            totalMultiplicacion = multiplicacion(numero1,numero2);
                            if (numero1 >= 0 && numero2 >= 0)
                            {
                                printf("\ne) Calcular el factorial de (%d!) y de (%d!)\n",numero1,numero2);
                                totalFactorial1 = factorial(numero1);
                                totalFactorial2 = factorial(numero2);
                            }
                            else
                            {
                                printf("\n No se puede sacar el operando de un numero negativo \n");
                            }

                    }
                    else
                    {
                        printf("\n No ingresaste ningun numero, no se puede realizar ninguna operacion\n");
                    }
                    flagresultados = 1;
                        break;
                    case 4:if (flag1 == 1 && flag2 ==1)
                    {
                            if(flagresultados == 1)
                            {



                            printf("\na) La suma total de (%d+%d) es : %d",numero1,numero2,totalSuma);

                            printf("\nb) La resta de (%d-%d) es : %d",numero1,numero2,totalResta);

                          if(numero2!=0)
                            {
                            printf("\nc) La division entre (%d/%d) es : %f",numero1,numero2,totalDivision);
                            }
                        else{
                            printf("\n no se puede dividir por 0");
                            }

                            printf("\nd) La multiplicacion entre (%d*%d) es : %d",numero1,numero2,totalMultiplicacion);

                          if (numero1 >= 0 && numero2 >=0)
                            {
                            printf("\ne) El factorial de (%d!) es: %d y El factorial de (%d!) es :  %d\n",numero1,totalFactorial1,numero2,totalFactorial2);
                            }
                        else
                            {
                            printf("\n No se puede sacar factorial de numeros negativos\n");
                            }
                            flagresultados = 0;
                        }
                        else
                        {
                            printf("\n Primero deberia realizar el calculo. Vuelva a intentar. \n");
                        }
                    }
                    else
                        {
                            printf("\n No hay resultados porque no ingresaste ningun numero previamente \n");
                        }
                        break;
                    case 5:
                        printf("\n Salio de la calculadora \n");

                    }
    system("pause");
    system("cls");
    }while(opcion != 5);
    return 0;
}
