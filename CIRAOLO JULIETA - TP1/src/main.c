/*
 Name        : TP1.c
 Author      : Julieta Ciraolo */

#include <stdio.h>
#include <stdlib.h>
#include "functions.h" //estas son las funciones que yo cree

int main(void) {

	setbuf(stdout,NULL); //para poder ver en la consola
    int opcion;
    int firstNumber;
    int secondNumber;
    int additionResult;
    int subtractionResult;
    float divisionResult;
    int multiplicationResult;
    int factorialResultA;
    int factorialResultB;

    do
    {
    	//menu de opciones para el usuario
        printf("1. Ingresar primer operando: ");
        printf("\n2. Ingresar segundo operando: ");
        printf("\n3. Calcular operaciones");
        printf("\n4. Informar resultados");
        printf("\n5. Salir");
        printf("\nElija una opcion: \n");
        scanf("%d", &opcion);

       switch(opcion)
        {
            case 1: // se solicita ingreso del primer operando
                printf("Ingrese un primer operando: \n");
            	scanf("%d",&firstNumber);
            	break;
            case 2: // se solicita ingreso del segundo operando
            	printf("Ingrese un segundo operando: \n");
            	scanf("%d",&secondNumber);
            	break;
            case 3: // se calculan todas las operaciones
            	additionResult = AddNumbers(firstNumber, secondNumber);
            	subtractionResult = SubtractNumbers(firstNumber, secondNumber);
            	divisionResult = DivideNumbers(firstNumber, secondNumber);
            	multiplicationResult = MultiplyNumbers(firstNumber, secondNumber);
            	factorialResultA = FactorialNumbers(firstNumber);
            	factorialResultB = FactorialNumbers(secondNumber);
            	break;
            case 4: // se informan los resultados por printf
            	printf("\na. El resultado de A+B es: %d", additionResult);
            	printf("\nb. El resultado de A-B es: %d", subtractionResult);
            	printf("\nc. El resultado de A/B es: %f", divisionResult);
            	printf("\nd. El resultado de A*B es: %d", multiplicationResult);
            	printf("\ne. El factorial de A es: %d y el factorial de B es: %d\n", factorialResultA, 					factorialResultB);
            	break;
            case 5: //en caso que el usuario decida salir
                printf("\nGracias por usar el programa...\n");
                break;
        }
    }while(opcion!=5);
	return 0;
}
