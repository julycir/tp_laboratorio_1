#include <stdio.h>
#include "menu.h"

/*
* \brief -Men� de opciones para que el usuario elija qu� quiere hacer
* \param -No recibe ning�n par�metro
* \return -Devuelve como entero la opci�n que el usuario eligi�
*/
int menu()
{
	int opcion;
	printf("NOMINA DE EMPLEADOS\n");
	printf("Bienvenido, elija la opci�n que desee realizar.\n");
	printf("Opci�n 1: ALTA\n");
	printf("Opci�n 2: MODIFICAR\n");
	printf("Opci�n 3: BAJA\n");
	printf("Opci�n 4: INFORMES\n");
	printf("Opci�n 5: SALIR\n");
	scanf("%d",&opcion);
	return opcion;
}

