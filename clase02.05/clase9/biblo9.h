#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1
// idproveedor va a parecer todas las veces que sea pedido el producto en cuestion de tan proveedor
//id solo aparece una vez, es la identeificacion del proovedor
// ver filtros en AMB
typedef struct
{
    int estado;
    float precio;
    char nombre[50];
    char codigoDeBarra[13];
    char fechaDeVencimiento[50];
    int  idProveedor[50];
}eProducto;
/*typedef struct
{
char proveedor[50];
int id;
char descripcion[50];
int cuil[50];
char dueño[50];
}eProveedor;
*/
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

void mostrarProducto(eProducto);

void cargarArray(eProducto[], int);

void mostrarArray(eProducto[], int);

void construirArray(eProducto[], int);

int insertarProducto(eProducto [], int );

int dameLugarLibre(eProducto[],int);

int existeProducto(eProducto,eProducto[]);

int borrarProducto(eProducto[], int);

int editarProducto(eProducto [], int );

void inicializarproveedor(eProveedor[],int tam)

