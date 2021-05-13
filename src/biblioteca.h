/*
 * biblioteca.h
 *
 *  Created on: 13 may. 2021
 *      Author: N3630024213
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int dia;
    int mes;
    int anio;
    int isEmpty;
}eFecha;

typedef struct
{
    int idTrabajo;
    char marcaBicicleta[25];
    int rodadoBicicleta;
    int idServicio;
    int isEmpty;
    eFecha fecha;

}eTrabajo;

int Menu ();
int inicializarTrabajo (eTrabajo listaTrabajo[], int tam);
int buscarLIbre (eTrabajo listaTrabajo[], int cant);
int altaTrabajo(eTrabajo listaTrabajo[],int tam,int id);


#endif /* BIBLIOTECA_H_ */
