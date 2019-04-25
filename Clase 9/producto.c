#include <stdio.h>
#include <stdlib.h>
#include "producto.h"
#include <string.h>
/*
int insertProducto(eProducto,eProducto[]);
int dameLugarLibre(eProducto[]);
int existeProducto(eProducto,eProducto[]);
int borrarProducto(eProducto,eProducto[]);
int editarProducto(eProducto,eProducto[]);
int insertProducto(eProducto elProducto, eProducto listado[])
{
int indice;
indice = damelugarlibre(listado);
if(indice!=-1)
{
listado[indice]=elProducto;
}
return indice;
}
int dameLugarLibre(eProducto elProducto, eProducto listado[])
{
int
}
*/



void mostrarArray(int tam,eProducto listado[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i] = pedirProducto();
    }
}
void cargarArray(int tam,eProducto listado[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        mostrarProducto(listado[i]);
    }
}


eProducto pedirProducto()
{
    eProducto productoParaRetornar;

    printf("Ingrese codigoDeBarra: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    printf("Ingrese fechaDeVencimiento: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaDeVencimiento);

    printf("Ingrese precio: ");
    scanf("%f",&productoParaRetornar.precio);

    printf("Ingrese proveedor: ");
    fflush(stdin);
    gets(productoParaRetornar.proveedor);

    return productoParaRetornar;
}

void mostrarProducto(eProducto elParametroProducto)
{

    printf(elParametroProducto.codigoDeBarra);

}

eProducto pedirProducto()
{
 eProducto retornarProducto;

 printf("INGRESE NOMBRE ");
 fflush(stdin);
 gets(retornarProducto.nombre);

 printf("INGRESE CODIGO DE BARRA: ");
 fflush(stdin);
 gets(retornarProducto.codigoDeBarra);

 printf("INGRESE PRECIO: ");
 scanf("%f",&retornarProducto.precio);


 printf("INGRESE FECHA DE VENCIMIENTO: ");
 fflush(stdin);
 gets(retornarProducto.fechaVencimiento);

 printf("INGRESE PROOVEDOR:  ");
 fflush(stdin);
 gets(retornarProducto.proveedor);
return retornarProducto;

}
void mostrarProducto(eProducto parametroProducto)
{


printf(parametroProducto.codigodebarra);
}
void construirArray(int tam,eProducto listado[])
{
 int i;
 for(i=0; i<tam; i++)
 {

 }
}
