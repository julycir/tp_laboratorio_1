#include <stdio.h>
#include "menu.h"
#include "pedirDatos.h"

/*
* \brief -Menú de opciones para que el usuario elija qué quiere hacer
* \param -No recibe ningún parámetro
* \return -Devuelve como entero la opción que el usuario eligió
*/
int menu()
{
	int opcion;
	printf("NOMINA DE EMPLEADOS\nBienvenido, elija la opción que desee realizar.\n");
	opcion=juli_PedirNumeroEntero(&opcion,"1.ALTA\n2.BAJA\n3.MODIFICAR\n4.INFORMES\n5.SALIR\n","No es una opción válida\n",1,5,2);
	return opcion;
}

