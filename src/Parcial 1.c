/*
 ============================================================================
 Name        : Parcial.c
 Author      : Franco Vivas
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define TAM 3


typedef struct
{
    int idServicio;
    char descripcion[25];
    float precio;
    int isEmpty;
}eServicio;

int main()
{

    int seguir='s';
    int id=2000;

    eTrabajo miTrabajo[TAM];


   do
    {
      switch (Menu ())
        {
            case 1:
                altaTrabajo(miTrabajo,TAM,id);
                 system("pause");
            break;
            case 2:

            system("pause");

            break;
            case 3:

            break;
            case 4:

            break;
            case 5:
            printf ("Hasta Pronto\n");
            seguir = 'n';
            break;
            default:
            printf ("\nOpcion invalida.\n");

        }

    }while (seguir == 's');
    return 0;
}

void harcodearServicio(eServicio listaServicio[])
{

            int codigoServicio[5]= {0,1,2,2,4};


    int idServicio[5]= {100,200,300,400,500};
    char descripcion[5][20]= {"Limpieza","Parche","Centrado","Cadena"};

    float precio[5]={250,300,400,350};


    for(int i=0; i<5; i++)
    {
        listaServicio[i].idServicio= idServicio[i];
        strcpy(listaServicio[i].descripcion,descripcion[i]);

        listaServicio[i].precio=precio[i];
        listaServicio[i].isEmpty=0;

    }


}
