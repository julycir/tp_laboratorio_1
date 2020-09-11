/*
 Name        : TP1.c
 Author      : Julieta Ciraolo */

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(void) {

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
        printf("Elija una opcion: ");
        printf("\n1. Ingresar primer operando: (A=%d)", firstNumber);
        printf("\n2. Ingresar segundo operando: (B=%d)", secondNumber);
        printf("\n3. Calcular operaciones");
        printf("\n4. Informar resultados");
        printf("\n5. Salir");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1: // se solicita ingreso del primer operando
                printf("Ingrese un primer operando: ");
            	scanf("%d",&firstNumber);
            	break;
            case 2: // se solicita ingreso del segundo operando
            	printf("Ingrese un segundo operando: ");
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
            	printf("a. El resultado de A+B es: %d\n", additionResult);
            	printf("b. El resultado de A-B es: %d\n", subtractionResult);
            	printf("c. El resultado de A/B es: %f\n", divisionResult);
            	printf("d. El resultado de A*B es: %d\n", multiplicationResult);
            	printf("e. El factorial de A es: %d", factorialResultA, " y el factorial de B es %d", factorialResultB);
            	break;
            case 5:
                printf("\nGracias por usar el programa...\n");
                break;
        }
    }while(opcion!=5);
	return 0;
}
