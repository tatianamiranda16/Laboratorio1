#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 3
typedef struct
{
 float precio;
char codigo[7];
}Producto;


int getCodigo(char *mensaje,char *codigo);
int getPrecio(char *mensaje, float *elPrecio);


int main()
{
   float precio[TAMANIO];
   float codigo[TAMANIO][7];
    int i;
    int j;
    Producto miproducto[TAMANIO];

   // printf("codigo:%f precio %f\n",miproducto.codigo,miproducto.precio);

    for(i =0; i<TAMANIO;i++)
    {
        while(getPrecio("Ingrese precio, porfa!!",&miproducto[i].precio)==0)
        {
            printf("error..");
        }
        while(getCodigo("ingrese codigo, porfa!!",&miproducto[i].codigo)==0)
        {
            printf("error..");
        }

    }
    for (i=0; i<TAMANIO;i++)
    {
   for(j=0;j<TAMANIO;j++)
        {
            if(miproducto[i].precio<miproducto[j].precio)
            {
              Producto aux = miproducto[i];
              miproducto[i] = miproducto[j];
              miproducto[j] = aux;

            }
        }
    }
for(i=0;i<TAMANIO;i++)
    {
        //printf("codigo:%s precio: %f \n",codigos[i],precios[i]);
          printf("codigo:%s precio: %f \n",miproducto[i].codigo,miproducto[i].precio);
          }
}
int getCodigo(char *mensaje, char *codigo)
{
char ingreso[50];
int retorno=0;
printf(mensaje);
scanf("%s",ingreso);
if(strlen(ingreso)==6)
{
 strcpy(ingreso,codigo);
    retorno = 1;
}
return retorno;

}

int getPrecio(char *mensaje, float *elPrecio)
{
char ingreso[50];
float auxPrecio;
int retorno=0;
printf(mensaje);
scanf("%s",ingreso);
auxPrecio=atof(ingreso);
if(auxPrecio>0)
{
    *elPrecio = auxPrecio;
    retorno = 1;
}
return retorno;
}
