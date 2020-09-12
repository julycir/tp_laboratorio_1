/*
 Name        : TP1.c
 Author      : Julieta Ciraolo */

#include <stdio.h>
#include <stdlib.h>
#include "functions.h" //estas son las funciones que yo cree

int main(void) {

	setbuf(stdout,NULL); //para poder ver en la consola
    int opcion;
    float firstNumber = 0;
    float secondNumber = 0;
    float additionResult;
    float subtractionResult;
    float divisionResult;
    float multiplicationResult;
    int factorialResultA;
    int factorialResultB;

    do
    {
    	//menu de opciones para el usuario
        printf("\n1. Ingresar primer operando: A = %.2f", firstNumber);
        printf("\n2. Ingresar segundo operando: B = %.2f", secondNumber);
        printf("\n3. Calcular operaciones");
        printf("\n4. Informar resultados");
        printf("\n5. Salir");
        printf("\nElija una opcion: \n");
        scanf("%d", &opcion);

       switch(opcion)
        {
            case 1: // se solicita ingreso del primer operando
                printf("Ingrese un primer operando: \n");
            	scanf("%f",&firstNumber);
            	break;
            case 2: // se solicita ingreso del segundo operando
            	printf("Ingrese un segundo operando: \n");
            	scanf("%f",&secondNumber);
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
            	printf("\na. El resultado de %.2f + %.2f es: %.2f", firstNumber, secondNumber, additionResult);
            	printf("\nb. El resultado de %.2f - %.2f es: %.2f", firstNumber, secondNumber, subtractionResult);
            	printf("\nc. El resultado de %.2f / %.2f es: %.2f", firstNumber, secondNumber, divisionResult);
            	printf("\nd. El resultado de %.2f * %.2f es: %.2f", firstNumber, secondNumber, multiplicationResult);
            	printf("\ne. El factorial de %.2f es: %d y el factorial de %.2f es: %d\n", firstNumber, factorialResultA, secondNumber, factorialResultB);
            	break;
            case 5: //en caso que el usuario decida salir
                printf("\nGracias por usar el programa...\n");
                break;
        }
    }while(opcion!=5);
	return 0;
}
