//implementación de las funciones matemáticas de la calculadora

#include "functions.h"

//función SUMA: recibe dos numeros como parametros, los suma entre si y devuelve el resultado de la suma
int AddNumbers (int firstNumber, int secondNumber)
{
    int additionResult;
    additionResult = firstNumber + secondNumber;
    return additionResult;
}

//función RESTA: recibe dos numeros como parametros, resta el segundo al primero y devuelve el resultado de la resta
int SubtractNumbers (int firstNumber, int secondNumber)
{
    int subtractionResult;
    subtractionResult = firstNumber - secondNumber;
    return subtractionResult;
}

//función DIVISION: recibe dos numeros como parametros, si el segundo numero es diferente de 0, divide al primer numero por el segundo y devuelve el resultado de la division
float DivideNumbers (int firstNumber, int secondNumber)
{
    float divisionResult;
    if (secondNumber == 0) {
    	char divisionResult;
        divisionResult = "No es posible dividir por cero.";
    } else {
        divisionResult = (float) firstNumber / secondNumber;
    }
    return divisionResult;
}

//función MULTIPLICACION: recibe dos numeros como parametros, los multiplica y devuelve el resultado de la multiplicacion
int MultiplyNumbers (int firstNumber, int secondNumber)
{
    int multiplicationResult;
    multiplicationResult = firstNumber * secondNumber;
    return multiplicationResult;
}

//función FACTORIAL: recibe un numero como parametro calcula su factorial y devuelve el resultado
int FactorialNumbers (int firstNumber)
{
	int factorialResult;
	if (firstNumber==0) {
	factorialResult = 1;
	} else {
		for(int i=firstNumber;i<1;i--){
			factorialResult = firstNumber * (firstNumber - 1);
		}
	}
	return factorialResult;
}
