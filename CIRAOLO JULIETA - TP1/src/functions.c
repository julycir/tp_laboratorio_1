//implementación de las funciones matemáticas de la calculadora

#include "functions.h"

//función SUMA: recibe dos numeros como parametros, los suma entre si y devuelve el resultado de la suma
float AddNumbers (float firstNumber, float secondNumber)
{
	float additionResult;
    additionResult = firstNumber + secondNumber;
    return additionResult;
}

//función RESTA: recibe dos numeros como parametros, resta el segundo al primero y devuelve el resultado de la resta
float SubtractNumbers (float firstNumber, float secondNumber)
{
	float subtractionResult;
    subtractionResult = firstNumber - secondNumber;
    return subtractionResult;
}

//función DIVISION: recibe dos numeros como parametros, si el segundo numero es diferente de 0, divide al primer numero por el segundo y devuelve el resultado de la division
float DivideNumbers (float firstNumber, float secondNumber)
{
    float divisionResult;
    if (secondNumber == 0) {
    	char divisionResult;
        divisionResult = "No es posible dividir por cero.";
    } else {
        divisionResult = firstNumber / secondNumber;
    }
    return divisionResult;
}

//función MULTIPLICACION: recibe dos numeros como parametros, los multiplica y devuelve el resultado de la multiplicacion
float MultiplyNumbers (float firstNumber, float secondNumber)
{
	float multiplicationResult;
    multiplicationResult = firstNumber * secondNumber;
    return multiplicationResult;
}

//función FACTORIAL: recibe un numero como parametro calcula su factorial y devuelve el resultado
int FactorialNumbers (int firstNumber)
{
	int factorialResult = 1;
	if (firstNumber==0) {
	factorialResult = 1;
	} else {
		for(int i=1;i<=firstNumber;i++){ //lo inicialice en 1 pq el factorial de 0 es 1
			factorialResult = factorialResult * i;
		}
	}
	return factorialResult;
}
