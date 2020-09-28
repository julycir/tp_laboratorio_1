#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pedirDatos.h"

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
