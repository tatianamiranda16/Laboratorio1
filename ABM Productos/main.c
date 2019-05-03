#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10
#include "biblioteca.h"

int main()
{
    //definir array.
    //cargar array.
    //mostrar array.
//HACER BIBLOTECA PROVEEDOR H Y c
    int opcion;

    eProducto unProducto;
    eProducto listadoProductos[T];

    eProveedor listadoProveedor[3];

    construirArray(listadoProductos,T);


    inicializarProductos(listadoProductos,T);
    inicializarProveedor(listadoProveedor,T);
    mostrarArray(listadoProductos,T);
    mostrarArrayProveedor(listadoProveedor,3);

    do
    {
        printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.Mostrar\nElija opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
               insertarProducto(listadoProductos,listadoProveedor, T);
            break;
            case 2:
                borrarProducto(listadoProductos,T);
                break;
            case 3:
                editarProducto(listadoProductos, T);
                break;

            case 4:
                mostrarArray(listadoProductos,T);
                break;
        }
    }while(opcion!=10);







    return 0;
}
