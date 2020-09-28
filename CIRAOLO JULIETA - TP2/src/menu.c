#include <stdio.h>
#include "menu.h"

/*
* \brief -Menú de opciones para que el usuario elija qué quiere hacer
* \param -No recibe ningún parámetro
* \return -Devuelve como entero la opción que el usuario eligió
*/
int menu()
{
	int opcion;
	printf("NOMINA DE EMPLEADOS\n");
	printf("Bienvenido, elija la opción que desee realizar.\n");
	printf("Opción 1: ALTA\n");
	printf("Opción 2: MODIFICAR\n");
	printf("Opción 3: BAJA\n");
	printf("Opción 4: INFORMES\n");
	printf("Opción 5: SALIR\n");
	scanf("%d",&opcion);
	return opcion;
}

