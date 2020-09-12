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
    /*int additionResult;
    int subtractionResult;
    float divisionResult;
    int multiplicationResult;*/
    //int factorialResult;

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
                printf("Ingrese un primer operando: ");
            	scanf("%d",&firstNumber);
            	break;
            case 2: // se solicita ingreso del segundo operando
            	printf("Ingrese un segundo operando: ");
            	scanf("%d",&secondNumber);
            	break;
            	/* case 3: // se calculan todas las operaciones
            	additionResult = AddNumbers(firstNumber, secondNumber);
            	subtractionResult = SubtractNumbers(firstNumber, secondNumber);
            	divisionResult = DivideNumbers(firstNumber, secondNumber);
            	multiplicationResult = MultiplyNumbers(firstNumber, secondNumber);
            	//factorialResult = FactorialNumbers(firstNumber);
            	break;
            case 4: // se informan los resultados por printf
            	printf("a. El resultado de A+B es: %d\n", additionResult);
            	printf("b. El resultado de A-B es: %d\n", subtractionResult);
            	printf("c. El resultado de A/B es: %f\n", divisionResult);
            	printf("d. El resultado de A*B es: %d\n", multiplicationResult);
            	//printf("e. El factorial de A es: %d", factorialResult);
            	break; */
            case 5:
                printf("\nGracias por usar el programa...\n");
                break;
        }
    }while(opcion!=5);
	return 0;
}
