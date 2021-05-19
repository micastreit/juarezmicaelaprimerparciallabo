#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fecha.h"
#include "tipo.h"
#include "color.h"
#include "servicio.h"
#include "bicicleta.h"
#include "trabajo.h"

#define TAMT 4
#define TAMC 5
#define TAMS 4
#define TAMB 5
#define TAMR 4
#define TAMTRAB 5



int main()
{

    int nextIdbicicleta= 50;
    int nextIdtrabajo= 100;

    eBicicleta bicicletas[TAMB];
    eTipo tipos[TAMT]=
    {
        {1000,"RUTERA"},
        {1001,"CARRERA"},
        {1002,"MOUNTAIN"},
        {1003,"BMX"},
    };
    eColor colores[TAMC]=
    {
        {5000,"GRIS"},
        {5001,"NEGRO"},
        {5002,"BLANCO"},
        {5003,"AZUL"},
        {5004,"ROJO"},
    };
    eServicio servicios[TAMS]=
    {
        {20000,"LIMPIEZA",250},
        {20001,"PARCHE",300},
        {20002,"CENTRADO",400},
        {20003,"CADENA",350},
    };
    eTrabajo trabajos[TAMTRAB];
    float rodados[TAMR]= {20,26,27.5,29};

    inicializarBicicletas(bicicletas,TAMB);
    inicializartrabajos(trabajos,TAMTRAB);

    char salir='n';
    do
    {
        switch(menu())
        {
        case 1:
            if(altabicicleta(bicicletas,TAMB,&nextIdbicicleta,colores,TAMC,tipos,TAMT,rodados,TAMR))
            {
                printf("Alta exitosa!\n\n");
            }
            else
            {
                printf("Hubo un problema al realizar el alta.\n\n");
            }
            break;
        case 2:
            if(modificarbicicleta(bicicletas,TAMB,tipos,TAMT,rodados,TAMR,colores,TAMC))
            {
                printf("Modificacion exitosa!\n\n");
            }
            else
            {
                printf("No se pudo realizar la modificacion.\n\n");
            }
            break;
        case 3:
            if(bajabicicleta(bicicletas,TAMB,tipos,TAMT,colores,TAMC))
            {
                printf("Baja exitosa.\n\n");
            }
            else
            {
                printf("No se pudo realizar la baja.\n\n");
            }
            break;
        case 4:
            system("cls");
            if(!mostrarbicicletas(bicicletas,TAMB,colores,TAMC,tipos,TAMT))
            {
                printf("\nHubo un error al cargar las bicicletas.\n");
            }
            break;
        case 5:
            if(!mostrarTipos(tipos,TAMT))
            {
                printf("\nHubo un error al cargar los tipos.\n");
            }
            break;
        case 6:
            if(!mostrarcolores(colores,TAMC))
            {
                printf("\nHubo un error al cargar los colores.\n");
            }
            break;
        case 7:
            if(!mostrarServicios(servicios,TAMS))
            {
                printf("\nHubo un error al cargar los servicios.\n");
            }
            break;
        case 8:
            if(altatrabajo(trabajos,TAMTRAB,&nextIdtrabajo,bicicletas,TAMB,servicios,TAMS,colores,TAMC,tipos,TAMT))
            {
                printf("Alta exitosa!\n\n");
            }
            else
            {
                printf("Hubo un problema al realizar el alta.\n\n");
            }
            break;
        case 9:
            system("cls");
            if(!mostrartrabajos(trabajos,TAMTRAB,bicicletas,TAMB,servicios,TAMS))
            {
                printf("\nHubo un error al cargar los trabajos.\n");
            }
            break;
        case 10:
            printf("Confirma salida? (s/n): ");
            fflush(stdin);
            salir=getchar();
            break;
        default:
            printf("Opcion invalida");
            system("pause");
        }
        system("pause");
    }
    while(!(salir=='s'||salir=='S'));

    return 0;
}
