#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1
// TODOS LOS PRODUCTOS CON SU PROVEEDOR
// POR CADA PROVEEDOR SUS PRODUCTOS
// POR CADA PROVEEDOR LA CANTIDAD DE PRODUCTOS
// EL PRECIO PROMEDIO DE LOS PRODUCTOS DE CADA PROVEEDOR
// EL/LOS PROVEEDOR/ES QUE PROVEE MAS PRODUCTOS
// TRAER CARPETAS DE PEDIR GETS O

typedef struct
{
    int estado;
    float precio;
    char nombre[50];
    char proveedor[50];
    char codigoDeBarra[13];
    char fechaDeVencimiento[50];
}eProducto;

typedef struct
{
 char proveedor[50];
 int id;
 char descripcion[50];
 int cuil[50];
 char duenio[50];
}eProveedor;

eProducto pedirProducto();

void inicializarProductos(eProducto[],int);//OK

void inicializarProveedor(eProveedor[],int);

void mostrarProducto(eProducto);

void cargarArray(eProducto[], int);

void mostrarArray(eProducto[], int);

void construirArray(eProducto[], int);

int insertarProducto(eProducto [], int );

int dameLugarLibre(eProducto[],int);

int existeProducto(eProducto,eProducto[]);

int borrarProducto(eProducto[], int);

int editarProducto(eProducto [], int );

eProovedor pedirProveedor();

void mostrarProveedor(eProveedor unProveedor);

void cargarArrayProveedor(eProveedor listado[], int cant);

void mostrarArrayProveedor(eProveedor listado[], int cant);

void construirArrayProovedor(eProveedor listado[], int cant);

int insertarProveedor(eProovedor listado[], int cant);

int dameLugarLibreproveedor(eProveedor listado[], int cant);

int existeProveedor(eProveedor unProovedor,eProveedor lista[]);

int borrarProovedor(eProovedor lista[], int cant);

void inicializarProveedor(eProovedor listaProveedor[],int cant);

int editarProducto(eProducto lista[], int cant);


