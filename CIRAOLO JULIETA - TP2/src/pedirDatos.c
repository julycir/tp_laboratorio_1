#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pedirDatos.h"

/*
* \brief -Pide al usuario que ingrese un número entero
* \param -int* resultado - Lugar de memoria adonde va a ir el numero obtenido
* \param -char* mensaje - Mensaje a mostrarle al usuario
* \param -char* mensajeError - Mensaje a mostrarle al usuario en caso de haber ingresado algo incorrecto
* \param -int minimo - Numero mínimo a ser ingresado
* \param -int maximo - Numero máximo a ser ingresado
* \param -int maximo - Numero máximo de reintentos permitidos al usuario
* \return -Devuelve 0 si todo okay, -1 si hubo error
*/
int juli_PedirNumeroEntero(int* resultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int bufferInt; //espacio de memoria intermedio
	int retorno=-1; //devuelve error
	if(resultado != NULL && mensaje!= NULL && mensajeError!= NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%d",&bufferInt);
			if(bufferInt >= minimo && bufferInt <= maximo)
			{
				*resultado = bufferInt;
				retorno=0;
				break;
			} else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos>=0);
	}
	return retorno;
}

/*
* \brief -Pide al usuario que ingrese un número flotante
* \param -float* resultado - Lugar de memoria adonde va a ir el numero obtenido
* \param -char* mensaje - Mensaje a mostrarle al usuario
* \param -char* mensajeError - Mensaje a mostrarle al usuario en caso de haber ingresado algo incorrecto
* \param -float minimo - Numero mínimo a ser ingresado
* \param -float maximo - Numero máximo a ser ingresado
* \param -int maximo - Numero máximo de reintentos permitidos al usuario
* \return -Devuelve 0 si todo okay, -1 si hubo error
*/
float juli_PedirNumeroFlotante(float* resultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
	float bufferFloat; //espacio de memoria intermedio
	int retorno=-1; //devuelve error
	if(resultado != NULL && mensaje!= NULL && mensajeError!= NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%f",&bufferFloat);
			if(bufferFloat >= minimo && bufferFloat <= maximo)
			{
				*resultado = bufferFloat;
				retorno=0;
				break;
			} else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos>=0);
	}
	return retorno;
}

/*
* \brief -Pide al usuario que ingrese un caracter
* \param -char* resultado - Lugar de memoria adonde va a ir el caracter obtenido
* \param -char* mensaje - Mensaje a mostrarle al usuario
* \param -char* mensajeError - Mensaje a mostrarle al usuario en caso de haber ingresado algo incorrecto
* \param -char minimo - Caracter mínimo a ser ingresado
* \param -char maximo - Caracter máximo a ser ingresado
* \param -int maximo - Numero máximo de reintentos permitidos al usuario
* \return -Devuelve 0 si todo okay, -1 si hubo error
*/
char juli_PedirCaracter(char* resultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{
	char bufferChar; //espacio de memoria intermedio
	int retorno=-1; //devuelve error
	if(resultado != NULL && mensaje!= NULL && mensajeError!= NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%c",&bufferChar);
			if(bufferChar >= minimo && bufferChar <= maximo)
			{
				*resultado = bufferChar;
				retorno=0;
				break;
			} else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos>=0);
	}
	return retorno;
}

/*
* \brief -Pide al usuario que ingrese una cadena de caracteres
* \param -char* resultado - Lugar de memoria adonde va a ir la cadena de caracteres obtenida
* \param -char* mensaje - Mensaje a mostrarle al usuario
* \param -char* mensajeError - Mensaje a mostrarle al usuario en caso de haber ingresado algo incorrecto
* \param -char minimo - Caracter mínimo a ser ingresado
* \param -char maximo - Caracter máximo a ser ingresado
* \param -int maximo - Numero máximo de reintentos permitidos al usuario
* \return -Devuelve 0 si todo okay, -1 si hubo error
*/

/*
char juli_PedirCaracter(char* resultado[], char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{
	char bufferArray[][30]; //espacio de memoria intermedio
	int retorno=-1; //devuelve error
	if(resultado != NULL && mensaje!= NULL && mensajeError!= NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%s",&bufferArray);
			if(bufferArray >= minimo && bufferArray <= maximo)
			{
				*resultado = bufferChar;
				retorno=0;
				break;
			} else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos>=0);
	}
	return retorno;
}
*/
