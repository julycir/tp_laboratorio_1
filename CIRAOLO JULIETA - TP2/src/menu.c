#include <stdio.h>
#include "menu.h"
#include "pedirDatos.h"

/*
* \brief -Men� de opciones para que el usuario elija qu� quiere hacer
* \param -No recibe ning�n par�metro
* \return -Devuelve como entero la opci�n que el usuario eligi�
*/
int menu()
{
	/*

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

	int* opcion;
	printf("NOMINA DE EMPLEADOS\nBienvenido, elija la opci�n que desee realizar.\n");
	opcion=juli_PedirNumeroEntero(&opcion,"1.ALTA\n2.BAJA\n3.MODIFICAR\n4.INFORMES\n5.SALIR\n","No es una opci�n v�lida\n",1,5,2);
	return opcion;*/

	int opcion;


	printf("NOMINA DE EMPLEADOS\nBienvenido, elija la opci�n que desee realizar.\n");
	int opcionElegida = juli_PedirNumeroEntero(&opcion,"1.ALTA\n2.BAJA\n3.MODIFICAR\n4.INFORMES\n5.SALIR\n","No es una opci�n v�lida\n",1,5,2);


	return opcion;

}
