/*
Trabajo práctico número 2
Fecha entrega: viernes 2/10/20
Autora: Julieta Ciraolo */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "ArrayEmployees.h"
#include "pedirDatos.h"

#define employeesAmount 1
#define EMPTY 0
#define OCCUPIED 1

int main(void)
{
	setbuf(stdout,NULL); //para poder ver en la consola

	Employee list[employeesAmount];
	int id=0;
	char name[20];
	char lastName[20];
	float salary=0;
	int sector=0;
	int opcion;

	int indexFreeSpace;
	//int indexSearchResult;

    initEmployees(list,employeesAmount,EMPTY);//inicializo lista de empleados vacía

	do{
	    opcion=menu();
		switch(opcion)
		{
			case 1:
				indexFreeSpace=LookForEmptySpace(list,employeesAmount);
				if(indexFreeSpace==-1)
				{
					printf("No hay lugares libres.");
				}
				addEmployee(list,employeesAmount,indexFreeSpace,name[20],lastName[20],salary,sector);
				break;
			case 2:
				findEmployeeById(list,employeesAmount,id);
				break;
			case 3:
				removeEmployee(list,employeesAmount,id);
				break;
			case 4:
				printEmployees(list,employeesAmount);
				break;
		}
		printf("%d",opcion);
	} while(opcion!=5);
	return 0;
}
