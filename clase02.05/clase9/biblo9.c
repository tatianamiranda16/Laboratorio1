#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "biblo9.h"
#define cant 10
/*
eProducto pedirProducto()
{
    eProducto productoParaRetornar;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    printf("Ingrese proveedor: ");
    fflush(stdin);
    gets(productoParaRetornar.proveedor);

    printf("Ingrese codigo de barra: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("Ingrese fecha de vencimiento: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaDeVencimiento);

    printf("Ingrese precio: ");
    scanf("%f", &productoParaRetornar.precio);

    productoParaRetornar.estado = OCUPADO;

    return productoParaRetornar;
}*/


void mostrarProducto(eProducto unProducto)
{//SE CORRE 15 LUGARES, O 10 POR EJEMPLO
    printf("%15s %15s %10s %10s %10f %5d\n", unProducto.nombre, unProducto.proveedor, unProducto.codigoDeBarra, unProducto.fechaDeVencimiento, unProducto.precio, unProducto.estado);
}


void cargarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i]= pedirProducto();
    }
}


void mostrarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(listado[i].estado==OCUPADO)
        {
            mostrarProducto(listado[i]);
        }


    }
}


void construirArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i].estado= LIBRE;
        listado[i].precio= 0;
        strcpy(listado[i].nombre, "");
        strcpy(listado[i].proveedor, "");
        strcpy(listado[i].codigoDeBarra, "");
        strcpy(listado[i].fechaDeVencimiento, "");
    }
}


int insertarProducto(eProducto listado[], int cant)
{
    int indice;
    indice= dameLugarLibre(listado, tam);
    if(indice != -1)
    {
        listado[indice]= pedirProducto();
    }
    return indice;
}


int dameLugarLibre(eProducto listado[], int cant)
{
    int i;
    int index = -1;

    for(i=0; i<tam; i++)
    {
        if(listado[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}


int existeProducto(eProducto unProducto,eProducto lista[])
{

}


int borrarProducto(eProducto lista[], int cant)
{


 int i;
   char codigo[50];
   int loEncontro = 0;

   printf("Ingrese el codigo de barras: ");
   fflush(stdin);
   gets(codigo);

   for(i=0; i<tam; i++)
   {
       if(strcmp(lista[i].codigoDeBarra, codigo)==0)
       {
          lista[i].estado = LIBRE;
            loEncontro = 1;
           break;
       }

   }

   if(loEncontro==0)
   {
      printf("Codigo inexistente!!");
   }

    return 0;
}

void inicializarProductos(eProducto listaProductos[],int cant)
{

    float precio[10]={42,43,44,40,41,35,36,37,38};
    char nombre[10][50]={"Infinia","Axion power","V-power","Infinia disel","Axion disel","V-powerdisel","Super","Axionsuper","Normal","Xerosen"};
    char idProveedor[10]={"1","2","3","1","2","3","1","2","3","1"};

    char codigoDeBarra[10][13]={"122","123","124","125","126","127","128","129","130","131"};

    char fechaDeVencimiento[3][50]={"01/01/2020","01/02/2020","01/03/2020","01/04/2020","01/05/2020","01/06/2020","01/07/2020","01/08/2020","01/09/2020","0/10/2020"};

    int i;

    for(i=0;i<10;i++)
    {
        strcpy(listaProductos[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaProductos[i].nombre,nombre[i]);
        strcpy(listaProductos[i].idProveedor, idProveedor[i]);
        strcpy(listaProductos[i].fechaDeVencimiento, fechaDeVencimiento[i]);
        listaProductos[i].precio=precio[i];
        listaProductos[i].estado = OCUPADO;
    }



}

int editarProducto(eProducto lista[], int cant)
{
   int i;
   char codigo[50];
   int loEncontro = 0;

   printf("Ingrese el codigo de barras: ");
   fflush(stdin);
   gets(codigo);

   for(i=0; i<tam; i++)
   {
       if(strcmp(lista[i].codigoDeBarra, codigo)==0)
       {
           printf("Ingrese el nuevo precio: ");
           scanf("%f", &lista[i].precio);
            loEncontro = 1;
           break;
       }

   }

   if(loEncontro==0)
   {
      printf("Codigo inexistente!!");
   }

   return 0;
}
void inicializarproveedor(eProveedor listaProveedores[],int tam)
{
    int id[03] ={01,02,03};
    char descripcion[3][50]={"petrolera","petrolera","petrolera"};
    char localidad[3][50]={"Avellaneda","Bahia Blanca","Rio Negro"};
    char cuil[3][50] = {"444","555","666"};
    char duenio[3][13]={"ypf","axion","shell"};



    int i;

    for(i=0;i<3;i++)
    {
        strcpy(listaProveedores[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaProveedores[i].nombre,nombre[i]);
        strcpy(listaProveedores[i].proveedor, proveedor[i]);
        strcpy(listaProveedores[i].fechaDeVencimiento, fechaDeVencimiento[i]);
        listaProveedores[i].id=id[i];
        listaProveedores[i].estado = OCUPADO;
    }



}


void mostrarArrayProductoConProveedor(eProducto listaProducto[],int tamprod, eProveedor listaProveedores()
{
    int i;
    int j;
    for(i=0;itamprod;i++)
    {
        mostrarProducto(listaProducto[i]);
        for(j=0;j<tamprov;j++)
        {
            if(listaProducto[i].idProveedor ==listaProveedores[j].id);
                mostrarProducto(listaProveedores[j]);
        }

    }
}
void mostrarArrayProovedorconproducto(eProducto listaProducto[],int tamprod, eProveedor listaProveedores()
{
    int i;
    int j;
    for(i=0;itamprov;i++)
    {
        mostrarProducto(listaProducto[i]);
        for(j=0;j<tamprod;j++)
        {
            if(listaProducto[i].idProveedor ==listaProveedores[j].id);
                mostrarProducto(listaProveedores[j]);
        }

    }
}
