//implementación de las funciones matemáticas de la calculadora

#include "functions.h"

int AddNumbers (int firstNumber, int secondNumber)
{
    int additionResult;
    additionResult = firstNumber + secondNumber;
    return additionResult;
}

int SubtractNumbers (int firstNumber, int secondNumber)
{
    int subtractionResult;
    subtractionResult = firstNumber - secondNumber;
    return subtractionResult;
}

float DivideNumbers (int firstNumber, int secondNumber)
{
    float divisionResult;
    if (secondNumber != 0) {
        divisionResult = firstNumber / secondNumber;
    }
    return divisionResult;
}

int MultiplyNumbers (int firstNumber, int secondNumber)
{
    int multiplicationResult;
    multiplicationResult = firstNumber * secondNumber;
    return multiplicationResult;
}

int FactorialNumbers (int firstNumber)
{
	int factorialResult;

	if (firstNumber==0) {
	factorialResult = 1;
	} else {
	factorialResult = firstNumber * factorial (firstNumber - 1);
	}
	return factorialResult;
}

