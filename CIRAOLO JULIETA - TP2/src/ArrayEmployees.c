/*BIBLIOTECA DE FUNCIONES “ArrayEmployees”
Agrupa funciones que permiten trabajar con los datos almacenados en la estructura Employee, la cual representa los datos de un empleado de la empresa.*/
#include "ArrayEmployees.h"

//Estructura "Employee"
struct
{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;
}typedef Employee;

/*
* \brief -Indica que todas las posiciones del array están vacías
* \param -list Employee* Pointer to array of employees
* \param -len int Array length
* \return -int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*/
int initEmployees(EmployeeList[], int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		EmployeeList[i]=isEmpty;
	}

//Para indicar que todas las posiciones del array están vacías, esta función pone la bandera
//	(isEmpty) en TRUE en todas las posiciones del array.
return 0;
}

Ejemplo uso:
r = initEmployees(arrayEmployees, ELEMENTS);
