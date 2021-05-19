#include "color.h"
#include "tipo.h"

#ifndef BICICLETA_H_INCLUDED
#define BICICLETA_H_INCLUDED

typedef struct
{
    int idbicicleta;
    char marca[20];
    int idtipo;
    int idcolor;
    float rodado;
    int isEmpty;
}eBicicleta;

#endif // BICICLETA_H_INCLUDED
int menu();
int inicializarBicicletas(eBicicleta lista[], int tam);
int buscarLibrebicicleta(eBicicleta lista[],int tam);
int mostrarbicicletas(eBicicleta bicicletas[],int tamb,eColor colores[],int tamc, eTipo tipos[],int tamt);
int mostrarbicicleta(eBicicleta unaBicicleta,eColor colores[],int tamc, eTipo tipos[],int tamt);
int mostrarRodados(float rodados[],int tamr);
int buscarrodado(int numerodado,float rodados[],int tamr);
int altabicicleta(eBicicleta bicicletas[],int tam,int* pIdbicicleta,eColor colores[],int tamc, eTipo tipos[],int tamt,float rodados[],int tamr);
int buscarbicicleta(int idbici,eBicicleta bicicletas[],int tam);
int modificarbicicleta(eBicicleta lista[],int tam, eTipo tipos[],int tamt,float rodados[],int tamr,eColor colores[],int tamc);
int menuModificar(void);
int bajabicicleta(eBicicleta lista[],int tam, eTipo tipos[],int tamt,eColor colores[],int tamc);
int cargarDescripcionbicicleta(int idbici, eBicicleta bicicletas[], int tam, char desc[]);

