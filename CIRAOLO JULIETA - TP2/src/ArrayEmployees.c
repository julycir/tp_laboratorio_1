#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#include "pedirDatos.h"

#define employeesAmount 1
#define EMPTY 0
#define OCCUPIED 1

/** \brief To indicate that all positions in the array are empty,
* this function puts the flag (isEmpty) in TRUE in all positions of the array
* \param Employee list [], which is the array of employees
* \param int len int, which is the array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
**/
int initEmployees(Employee list[], int len,int value)
{
    int i;
    for(i=0;i<employeesAmount;i++)
    {
        list[i].isEmpty=value;
    }
    return 0;
}

/** \brief Looks for the empty space in an array
* \param Employee list [], which is the array of employees
* \param int len, which is the array length
* \return int Return (-1) if there is no empty space or otherwise position of empty space
**/

int LookForEmptySpace(Employee list[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(list[i].isEmpty==EMPTY)
        {
            return i;
        }
    }
    return -1;
}

/** \brief Adds in a existing list of employees the values received as parameters
* in the first empty position
* \param Employee list [], which is the array of employees
* \param int len int, which is the array length
* \param id int
* \param name[] char
* \param lastName[] char
* \param salary float
* \param sector int
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok
**/
int addEmployee(Employee list[], int len, int id, char name,char lastName,float salary,int sector)
{
	int retorno=-1;
	//aca falta un if con empty space
	int i;
	for(i=0;i<len;i++)
	{
		int idEmployee=1;
		list[i].id=idEmployee+=1;
		//es una variable que se inicia en 1 y se va aumentando cada vez que carguen un alumno mas
		fflush(stdin);
		scanf("%[^\n]",list[i].name);
		printf("Ingrese su apellido: \n");
		fflush(stdin);
		scanf("%[^\n]",list[i].lastName);
		//juli_PedirNumeroFlotante(list[i].salary,"Ingrese su salario: \n","Por favor, ingrese su salario: \n",1000,1500,2);
		printf("Ingrese su salario: ");
		scanf("%f",&list[i].salary);
		//juli_PedirNumeroEntero(list[i].sector,"Ingrese su sector: \n","Por favor, ingrese su sector: \n",1,10,2);
		printf("Ingrese su sector: ");
	    scanf("%d",&list[i].sector);
		list[i].isEmpty=OCCUPIED;
		retorno=0;
		}
	return retorno;
}


/** \brief Finds an Employee by Id and returns the index position in array.
* \param list Employee*
* \param len int
* \param id int
* \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
*
*/
int findEmployeeById(Employee list[], int len,int id)
{
    int idIngresado;
    int indiceId;
    int i;
    printf("Ingrese el id a buscar.\n");
    scanf("%d",&idIngresado);
    for(i=0;i<len;i++)
    {
        if(list[i].id==idIngresado)
        {
            indiceId=i;
        } else
        {
            indiceId=-1;
        }
    }
    return indiceId;
}

/** \brief Remove a Employee by Id (put isEmpty Flag in 1)
* \param list Employee*
* \param len int
* \param id int
* \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
find a employee] - (0) if Ok
*/
int removeEmployee(Employee list[], int len, int id)
{
    int idIngresado;
    int i;
    printf("Ingrese el id a borrar.\n");
    scanf("%d",&idIngresado);
    for(i=0;i<len;i++)
    {
        if(list[i].id==idIngresado)
        {
            list[i].isEmpty=EMPTY;
        }
    }
    return -1;
}

/** \brief print the content of employees array
*
* \param list Employee*
* \param length int
* \return int
*
*/
int printEmployees(Employee list[], int len)
{
    printf("Employees list\n");
    printf("%8s|%20s|%20s|%8s|%8s\n","Id","Name","Last name","Salary","Sector");
    int i;
    for(i=0;i<len;i++)
    {
        if(list[i].isEmpty!=0)
        {
            printf("%8d|%20s|%20s|%8.2f|%8d\n",list[i].id,list[i].name,list[i].lastName,list[i].salary,list[i].sector);
        }
    }
    return 0;
}

//ORDENAR POR NOMBRE - creo que es lo mismo pero hay que cambiar la condicion del if por una que evalúe los codigos ascii,  lo mismo que un burbujeo comun* Era con la función strcmp
